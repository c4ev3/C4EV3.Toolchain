/*
 * Copyright 2011      INRIA Saclay
 * Copyright 2011      Sven Verdoolaege
 * Copyright 2012-2013 Ecole Normale Superieure
 *
 * Use of this software is governed by the MIT license
 *
 * Written by Sven Verdoolaege, INRIA Saclay - Ile-de-France,
 * Parc Club Orsay Universite, ZAC des vignes, 4 rue Jacques Monod,
 * 91893 Orsay, France
 * and Ecole Normale Superieure, 45 rue d’Ulm, 75230 Paris, France
 */

#include <isl_ctx_private.h>
#define ISL_DIM_H
#include <isl_map_private.h>
#include <isl_union_map_private.h>
#include <isl_aff_private.h>
#include <isl_space_private.h>
#include <isl_local_space_private.h>
#include <isl_mat_private.h>
#include <isl/constraint.h>
#include <isl/seq.h>
#include <isl/set.h>
#include <isl_val_private.h>
#include <isl_config.h>

#undef BASE
#define BASE aff

#include <isl_list_templ.c>

#undef BASE
#define BASE pw_aff

#include <isl_list_templ.c>

__isl_give isl_aff *isl_aff_alloc_vec(__isl_take isl_local_space *ls,
	__isl_take isl_vec *v)
{
	isl_aff *aff;

	if (!ls || !v)
		goto error;

	aff = isl_calloc_type(v->ctx, struct isl_aff);
	if (!aff)
		goto error;

	aff->ref = 1;
	aff->ls = ls;
	aff->v = v;

	return aff;
error:
	isl_local_space_free(ls);
	isl_vec_free(v);
	return NULL;
}

__isl_give isl_aff *isl_aff_alloc(__isl_take isl_local_space *ls)
{
	isl_ctx *ctx;
	isl_vec *v;
	unsigned total;

	if (!ls)
		return NULL;

	ctx = isl_local_space_get_ctx(ls);
	if (!isl_local_space_divs_known(ls))
		isl_die(ctx, isl_error_invalid, "local space has unknown divs",
			goto error);
	if (!isl_local_space_is_set(ls))
		isl_die(ctx, isl_error_invalid,
			"domain of affine expression should be a set",
			goto error);

	total = isl_local_space_dim(ls, isl_dim_all);
	v = isl_vec_alloc(ctx, 1 + 1 + total);
	return isl_aff_alloc_vec(ls, v);
error:
	isl_local_space_free(ls);
	return NULL;
}

__isl_give isl_aff *isl_aff_zero_on_domain(__isl_take isl_local_space *ls)
{
	isl_aff *aff;

	aff = isl_aff_alloc(ls);
	if (!aff)
		return NULL;

	isl_int_set_si(aff->v->el[0], 1);
	isl_seq_clr(aff->v->el + 1, aff->v->size - 1);

	return aff;
}

/* Return a piecewise affine expression defined on the specified domain
 * that is equal to zero.
 */
__isl_give isl_pw_aff *isl_pw_aff_zero_on_domain(__isl_take isl_local_space *ls)
{
	return isl_pw_aff_from_aff(isl_aff_zero_on_domain(ls));
}

/* Return an affine expression that is equal to the specified dimension
 * in "ls".
 */
__isl_give isl_aff *isl_aff_var_on_domain(__isl_take isl_local_space *ls,
	enum isl_dim_type type, unsigned pos)
{
	isl_space *space;
	isl_aff *aff;

	if (!ls)
		return NULL;

	space = isl_local_space_get_space(ls);
	if (!space)
		goto error;
	if (isl_space_is_map(space))
		isl_die(isl_space_get_ctx(space), isl_error_invalid,
			"expecting (parameter) set space", goto error);
	if (pos >= isl_local_space_dim(ls, type))
		isl_die(isl_space_get_ctx(space), isl_error_invalid,
			"position out of bounds", goto error);

	isl_space_free(space);
	aff = isl_aff_alloc(ls);
	if (!aff)
		return NULL;

	pos += isl_local_space_offset(aff->ls, type);

	isl_int_set_si(aff->v->el[0], 1);
	isl_seq_clr(aff->v->el + 1, aff->v->size - 1);
	isl_int_set_si(aff->v->el[1 + pos], 1);

	return aff;
error:
	isl_local_space_free(ls);
	isl_space_free(space);
	return NULL;
}

/* Return a piecewise affine expression that is equal to
 * the specified dimension in "ls".
 */
__isl_give isl_pw_aff *isl_pw_aff_var_on_domain(__isl_take isl_local_space *ls,
	enum isl_dim_type type, unsigned pos)
{
	return isl_pw_aff_from_aff(isl_aff_var_on_domain(ls, type, pos));
}

__isl_give isl_aff *isl_aff_copy(__isl_keep isl_aff *aff)
{
	if (!aff)
		return NULL;

	aff->ref++;
	return aff;
}

__isl_give isl_aff *isl_aff_dup(__isl_keep isl_aff *aff)
{
	if (!aff)
		return NULL;

	return isl_aff_alloc_vec(isl_local_space_copy(aff->ls),
				 isl_vec_copy(aff->v));
}

__isl_give isl_aff *isl_aff_cow(__isl_take isl_aff *aff)
{
	if (!aff)
		return NULL;

	if (aff->ref == 1)
		return aff;
	aff->ref--;
	return isl_aff_dup(aff);
}

void *isl_aff_free(__isl_take isl_aff *aff)
{
	if (!aff)
		return NULL;

	if (--aff->ref > 0)
		return NULL;

	isl_local_space_free(aff->ls);
	isl_vec_free(aff->v);

	free(aff);

	return NULL;
}

isl_ctx *isl_aff_get_ctx(__isl_keep isl_aff *aff)
{
	return aff ? isl_local_space_get_ctx(aff->ls) : NULL;
}

/* Externally, an isl_aff has a map space, but internally, the
 * ls field corresponds to the domain of that space.
 */
int isl_aff_dim(__isl_keep isl_aff *aff, enum isl_dim_type type)
{
	if (!aff)
		return 0;
	if (type == isl_dim_out)
		return 1;
	if (type == isl_dim_in)
		type = isl_dim_set;
	return isl_local_space_dim(aff->ls, type);
}

__isl_give isl_space *isl_aff_get_domain_space(__isl_keep isl_aff *aff)
{
	return aff ? isl_local_space_get_space(aff->ls) : NULL;
}

__isl_give isl_space *isl_aff_get_space(__isl_keep isl_aff *aff)
{
	isl_space *space;
	if (!aff)
		return NULL;
	space = isl_local_space_get_space(aff->ls);
	space = isl_space_from_domain(space);
	space = isl_space_add_dims(space, isl_dim_out, 1);
	return space;
}

__isl_give isl_local_space *isl_aff_get_domain_local_space(
	__isl_keep isl_aff *aff)
{
	return aff ? isl_local_space_copy(aff->ls) : NULL;
}

__isl_give isl_local_space *isl_aff_get_local_space(__isl_keep isl_aff *aff)
{
	isl_local_space *ls;
	if (!aff)
		return NULL;
	ls = isl_local_space_copy(aff->ls);
	ls = isl_local_space_from_domain(ls);
	ls = isl_local_space_add_dims(ls, isl_dim_out, 1);
	return ls;
}

/* Externally, an isl_aff has a map space, but internally, the
 * ls field corresponds to the domain of that space.
 */
const char *isl_aff_get_dim_name(__isl_keep isl_aff *aff,
	enum isl_dim_type type, unsigned pos)
{
	if (!aff)
		return NULL;
	if (type == isl_dim_out)
		return NULL;
	if (type == isl_dim_in)
		type = isl_dim_set;
	return isl_local_space_get_dim_name(aff->ls, type, pos);
}

__isl_give isl_aff *isl_aff_reset_domain_space(__isl_take isl_aff *aff,
	__isl_take isl_space *dim)
{
	aff = isl_aff_cow(aff);
	if (!aff || !dim)
		goto error;

	aff->ls = isl_local_space_reset_space(aff->ls, dim);
	if (!aff->ls)
		return isl_aff_free(aff);

	return aff;
error:
	isl_aff_free(aff);
	isl_space_free(dim);
	return NULL;
}

/* Reset the space of "aff".  This function is called from isl_pw_templ.c
 * and doesn't know if the space of an element object is represented
 * directly or through its domain.  It therefore passes along both.
 */
__isl_give isl_aff *isl_aff_reset_space_and_domain(__isl_take isl_aff *aff,
	__isl_take isl_space *space, __isl_take isl_space *domain)
{
	isl_space_free(space);
	return isl_aff_reset_domain_space(aff, domain);
}

/* Reorder the coefficients of the affine expression based
 * on the given reodering.
 * The reordering r is assumed to have been extended with the local
 * variables.
 */
static __isl_give isl_vec *vec_reorder(__isl_take isl_vec *vec,
	__isl_take isl_reordering *r, int n_div)
{
	isl_vec *res;
	int i;

	if (!vec || !r)
		goto error;

	res = isl_vec_alloc(vec->ctx,
			    2 + isl_space_dim(r->dim, isl_dim_all) + n_div);
	isl_seq_cpy(res->el, vec->el, 2);
	isl_seq_clr(res->el + 2, res->size - 2);
	for (i = 0; i < r->len; ++i)
		isl_int_set(res->el[2 + r->pos[i]], vec->el[2 + i]);

	isl_reordering_free(r);
	isl_vec_free(vec);
	return res;
error:
	isl_vec_free(vec);
	isl_reordering_free(r);
	return NULL;
}

/* Reorder the dimensions of the domain of "aff" according
 * to the given reordering.
 */
__isl_give isl_aff *isl_aff_realign_domain(__isl_take isl_aff *aff,
	__isl_take isl_reordering *r)
{
	aff = isl_aff_cow(aff);
	if (!aff)
		goto error;

	r = isl_reordering_extend(r, aff->ls->div->n_row);
	aff->v = vec_reorder(aff->v, isl_reordering_copy(r),
				aff->ls->div->n_row);
	aff->ls = isl_local_space_realign(aff->ls, r);

	if (!aff->v || !aff->ls)
		return isl_aff_free(aff);

	return aff;
error:
	isl_aff_free(aff);
	isl_reordering_free(r);
	return NULL;
}

__isl_give isl_aff *isl_aff_align_params(__isl_take isl_aff *aff,
	__isl_take isl_space *model)
{
	if (!aff || !model)
		goto error;

	if (!isl_space_match(aff->ls->dim, isl_dim_param,
			     model, isl_dim_param)) {
		isl_reordering *exp;

		model = isl_space_drop_dims(model, isl_dim_in,
					0, isl_space_dim(model, isl_dim_in));
		model = isl_space_drop_dims(model, isl_dim_out,
					0, isl_space_dim(model, isl_dim_out));
		exp = isl_parameter_alignment_reordering(aff->ls->dim, model);
		exp = isl_reordering_extend_space(exp,
					isl_aff_get_domain_space(aff));
		aff = isl_aff_realign_domain(aff, exp);
	}

	isl_space_free(model);
	return aff;
error:
	isl_space_free(model);
	isl_aff_free(aff);
	return NULL;
}

int isl_aff_plain_is_zero(__isl_keep isl_aff *aff)
{
	if (!aff)
		return -1;

	return isl_seq_first_non_zero(aff->v->el + 1, aff->v->size - 1) < 0;
}

int isl_aff_plain_is_equal(__isl_keep isl_aff *aff1, __isl_keep isl_aff *aff2)
{
	int equal;

	if (!aff1 || !aff2)
		return -1;

	equal = isl_local_space_is_equal(aff1->ls, aff2->ls);
	if (equal < 0 || !equal)
		return equal;

	return isl_vec_is_equal(aff1->v, aff2->v);
}

int isl_aff_get_denominator(__isl_keep isl_aff *aff, isl_int *v)
{
	if (!aff)
		return -1;
	isl_int_set(*v, aff->v->el[0]);
	return 0;
}

/* Return the common denominator of "aff".
 */
__isl_give isl_val *isl_aff_get_denominator_val(__isl_keep isl_aff *aff)
{
	isl_ctx *ctx;

	if (!aff)
		return NULL;

	ctx = isl_aff_get_ctx(aff);
	return isl_val_int_from_isl_int(ctx, aff->v->el[0]);
}

int isl_aff_get_constant(__isl_keep isl_aff *aff, isl_int *v)
{
	if (!aff)
		return -1;
	isl_int_set(*v, aff->v->el[1]);
	return 0;
}

/* Return the constant term of "aff".
 */
__isl_give isl_val *isl_aff_get_constant_val(__isl_keep isl_aff *aff)
{
	isl_ctx *ctx;
	isl_val *v;

	if (!aff)
		return NULL;

	ctx = isl_aff_get_ctx(aff);
	v = isl_val_rat_from_isl_int(ctx, aff->v->el[1], aff->v->el[0]);
	return isl_val_normalize(v);
}

int isl_aff_get_coefficient(__isl_keep isl_aff *aff,
	enum isl_dim_type type, int pos, isl_int *v)
{
	if (!aff)
		return -1;

	if (type == isl_dim_out)
		isl_die(aff->v->ctx, isl_error_invalid,
			"output/set dimension does not have a coefficient",
			return -1);
	if (type == isl_dim_in)
		type = isl_dim_set;

	if (pos >= isl_local_space_dim(aff->ls, type))
		isl_die(aff->v->ctx, isl_error_invalid,
			"position out of bounds", return -1);

	pos += isl_local_space_offset(aff->ls, type);
	isl_int_set(*v, aff->v->el[1 + pos]);

	return 0;
}

/* Return the coefficient of the variable of type "type" at position "pos"
 * of "aff".
 */
__isl_give isl_val *isl_aff_get_coefficient_val(__isl_keep isl_aff *aff,
	enum isl_dim_type type, int pos)
{
	isl_ctx *ctx;
	isl_val *v;

	if (!aff)
		return NULL;

	ctx = isl_aff_get_ctx(aff);
	if (type == isl_dim_out)
		isl_die(ctx, isl_error_invalid,
			"output/set dimension does not have a coefficient",
			return NULL);
	if (type == isl_dim_in)
		type = isl_dim_set;

	if (pos >= isl_local_space_dim(aff->ls, type))
		isl_die(ctx, isl_error_invalid,
			"position out of bounds", return NULL);

	pos += isl_local_space_offset(aff->ls, type);
	v = isl_val_rat_from_isl_int(ctx, aff->v->el[1 + pos], aff->v->el[0]);
	return isl_val_normalize(v);
}

__isl_give isl_aff *isl_aff_set_denominator(__isl_take isl_aff *aff, isl_int v)
{
	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;

	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		return isl_aff_free(aff);

	isl_int_set(aff->v->el[0], v);

	return aff;
}

__isl_give isl_aff *isl_aff_set_constant(__isl_take isl_aff *aff, isl_int v)
{
	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;

	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		return isl_aff_free(aff);

	isl_int_set(aff->v->el[1], v);

	return aff;
}

/* Replace the constant term of "aff" by "v".
 */
__isl_give isl_aff *isl_aff_set_constant_val(__isl_take isl_aff *aff,
	__isl_take isl_val *v)
{
	if (!aff || !v)
		goto error;

	if (!isl_val_is_rat(v))
		isl_die(isl_aff_get_ctx(aff), isl_error_invalid,
			"expecting rational value", goto error);

	if (isl_int_eq(aff->v->el[1], v->n) &&
	    isl_int_eq(aff->v->el[0], v->d)) {
		isl_val_free(v);
		return aff;
	}

	aff = isl_aff_cow(aff);
	if (!aff)
		goto error;
	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		goto error;

	if (isl_int_eq(aff->v->el[0], v->d)) {
		isl_int_set(aff->v->el[1], v->n);
	} else if (isl_int_is_one(v->d)) {
		isl_int_mul(aff->v->el[1], aff->v->el[0], v->n);
	} else {
		isl_seq_scale(aff->v->el + 1,
				aff->v->el + 1, v->d, aff->v->size - 1);
		isl_int_mul(aff->v->el[1], aff->v->el[0], v->n);
		isl_int_mul(aff->v->el[0], aff->v->el[0], v->d);
		aff->v = isl_vec_normalize(aff->v);
		if (!aff->v)
			goto error;
	}

	isl_val_free(v);
	return aff;
error:
	isl_aff_free(aff);
	isl_val_free(v);
	return NULL;
}

__isl_give isl_aff *isl_aff_add_constant(__isl_take isl_aff *aff, isl_int v)
{
	if (isl_int_is_zero(v))
		return aff;

	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;

	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		return isl_aff_free(aff);

	isl_int_addmul(aff->v->el[1], aff->v->el[0], v);

	return aff;
}

/* Add "v" to the constant term of "aff".
 */
__isl_give isl_aff *isl_aff_add_constant_val(__isl_take isl_aff *aff,
	__isl_take isl_val *v)
{
	if (!aff || !v)
		goto error;

	if (isl_val_is_zero(v)) {
		isl_val_free(v);
		return aff;
	}

	if (!isl_val_is_rat(v))
		isl_die(isl_aff_get_ctx(aff), isl_error_invalid,
			"expecting rational value", goto error);

	aff = isl_aff_cow(aff);
	if (!aff)
		goto error;

	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		goto error;

	if (isl_int_is_one(v->d)) {
		isl_int_addmul(aff->v->el[1], aff->v->el[0], v->n);
	} else if (isl_int_eq(aff->v->el[0], v->d)) {
		isl_int_add(aff->v->el[1], aff->v->el[1], v->n);
		aff->v = isl_vec_normalize(aff->v);
		if (!aff->v)
			goto error;
	} else {
		isl_seq_scale(aff->v->el + 1,
				aff->v->el + 1, v->d, aff->v->size - 1);
		isl_int_addmul(aff->v->el[1], aff->v->el[0], v->n);
		isl_int_mul(aff->v->el[0], aff->v->el[0], v->d);
		aff->v = isl_vec_normalize(aff->v);
		if (!aff->v)
			goto error;
	}

	isl_val_free(v);
	return aff;
error:
	isl_aff_free(aff);
	isl_val_free(v);
	return NULL;
}

__isl_give isl_aff *isl_aff_add_constant_si(__isl_take isl_aff *aff, int v)
{
	isl_int t;

	isl_int_init(t);
	isl_int_set_si(t, v);
	aff = isl_aff_add_constant(aff, t);
	isl_int_clear(t);

	return aff;
}

/* Add "v" to the numerator of the constant term of "aff".
 */
__isl_give isl_aff *isl_aff_add_constant_num(__isl_take isl_aff *aff, isl_int v)
{
	if (isl_int_is_zero(v))
		return aff;

	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;

	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		return isl_aff_free(aff);

	isl_int_add(aff->v->el[1], aff->v->el[1], v);

	return aff;
}

/* Add "v" to the numerator of the constant term of "aff".
 */
__isl_give isl_aff *isl_aff_add_constant_num_si(__isl_take isl_aff *aff, int v)
{
	isl_int t;

	if (v == 0)
		return aff;

	isl_int_init(t);
	isl_int_set_si(t, v);
	aff = isl_aff_add_constant_num(aff, t);
	isl_int_clear(t);

	return aff;
}

__isl_give isl_aff *isl_aff_set_constant_si(__isl_take isl_aff *aff, int v)
{
	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;

	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		return isl_aff_free(aff);

	isl_int_set_si(aff->v->el[1], v);

	return aff;
}

__isl_give isl_aff *isl_aff_set_coefficient(__isl_take isl_aff *aff,
	enum isl_dim_type type, int pos, isl_int v)
{
	if (!aff)
		return NULL;

	if (type == isl_dim_out)
		isl_die(aff->v->ctx, isl_error_invalid,
			"output/set dimension does not have a coefficient",
			return isl_aff_free(aff));
	if (type == isl_dim_in)
		type = isl_dim_set;

	if (pos >= isl_local_space_dim(aff->ls, type))
		isl_die(aff->v->ctx, isl_error_invalid,
			"position out of bounds", return isl_aff_free(aff));

	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;

	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		return isl_aff_free(aff);

	pos += isl_local_space_offset(aff->ls, type);
	isl_int_set(aff->v->el[1 + pos], v);

	return aff;
}

__isl_give isl_aff *isl_aff_set_coefficient_si(__isl_take isl_aff *aff,
	enum isl_dim_type type, int pos, int v)
{
	if (!aff)
		return NULL;

	if (type == isl_dim_out)
		isl_die(aff->v->ctx, isl_error_invalid,
			"output/set dimension does not have a coefficient",
			return isl_aff_free(aff));
	if (type == isl_dim_in)
		type = isl_dim_set;

	if (pos >= isl_local_space_dim(aff->ls, type))
		isl_die(aff->v->ctx, isl_error_invalid,
			"position out of bounds", return isl_aff_free(aff));

	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;

	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		return isl_aff_free(aff);

	pos += isl_local_space_offset(aff->ls, type);
	isl_int_set_si(aff->v->el[1 + pos], v);

	return aff;
}

/* Replace the coefficient of the variable of type "type" at position "pos"
 * of "aff" by "v".
 */
__isl_give isl_aff *isl_aff_set_coefficient_val(__isl_take isl_aff *aff,
	enum isl_dim_type type, int pos, __isl_take isl_val *v)
{
	if (!aff || !v)
		goto error;

	if (type == isl_dim_out)
		isl_die(aff->v->ctx, isl_error_invalid,
			"output/set dimension does not have a coefficient",
			goto error);
	if (type == isl_dim_in)
		type = isl_dim_set;

	if (pos >= isl_local_space_dim(aff->ls, type))
		isl_die(aff->v->ctx, isl_error_invalid,
			"position out of bounds", goto error);

	if (!isl_val_is_rat(v))
		isl_die(isl_aff_get_ctx(aff), isl_error_invalid,
			"expecting rational value", goto error);

	pos += isl_local_space_offset(aff->ls, type);
	if (isl_int_eq(aff->v->el[1 + pos], v->n) &&
	    isl_int_eq(aff->v->el[0], v->d)) {
		isl_val_free(v);
		return aff;
	}

	aff = isl_aff_cow(aff);
	if (!aff)
		goto error;
	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		goto error;

	if (isl_int_eq(aff->v->el[0], v->d)) {
		isl_int_set(aff->v->el[1 + pos], v->n);
	} else if (isl_int_is_one(v->d)) {
		isl_int_mul(aff->v->el[1 + pos], aff->v->el[0], v->n);
	} else {
		isl_seq_scale(aff->v->el + 1,
				aff->v->el + 1, v->d, aff->v->size - 1);
		isl_int_mul(aff->v->el[1 + pos], aff->v->el[0], v->n);
		isl_int_mul(aff->v->el[0], aff->v->el[0], v->d);
		aff->v = isl_vec_normalize(aff->v);
		if (!aff->v)
			goto error;
	}

	isl_val_free(v);
	return aff;
error:
	isl_aff_free(aff);
	isl_val_free(v);
	return NULL;
}

__isl_give isl_aff *isl_aff_add_coefficient(__isl_take isl_aff *aff,
	enum isl_dim_type type, int pos, isl_int v)
{
	if (!aff)
		return NULL;

	if (type == isl_dim_out)
		isl_die(aff->v->ctx, isl_error_invalid,
			"output/set dimension does not have a coefficient",
			return isl_aff_free(aff));
	if (type == isl_dim_in)
		type = isl_dim_set;

	if (pos >= isl_local_space_dim(aff->ls, type))
		isl_die(aff->v->ctx, isl_error_invalid,
			"position out of bounds", return isl_aff_free(aff));

	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;

	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		return isl_aff_free(aff);

	pos += isl_local_space_offset(aff->ls, type);
	isl_int_addmul(aff->v->el[1 + pos], aff->v->el[0], v);

	return aff;
}

/* Add "v" to the coefficient of the variable of type "type"
 * at position "pos" of "aff".
 */
__isl_give isl_aff *isl_aff_add_coefficient_val(__isl_take isl_aff *aff,
	enum isl_dim_type type, int pos, __isl_take isl_val *v)
{
	if (!aff || !v)
		goto error;

	if (isl_val_is_zero(v)) {
		isl_val_free(v);
		return aff;
	}

	if (type == isl_dim_out)
		isl_die(aff->v->ctx, isl_error_invalid,
			"output/set dimension does not have a coefficient",
			goto error);
	if (type == isl_dim_in)
		type = isl_dim_set;

	if (pos >= isl_local_space_dim(aff->ls, type))
		isl_die(aff->v->ctx, isl_error_invalid,
			"position out of bounds", goto error);

	if (!isl_val_is_rat(v))
		isl_die(isl_aff_get_ctx(aff), isl_error_invalid,
			"expecting rational value", goto error);

	aff = isl_aff_cow(aff);
	if (!aff)
		goto error;

	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		goto error;

	pos += isl_local_space_offset(aff->ls, type);
	if (isl_int_is_one(v->d)) {
		isl_int_addmul(aff->v->el[1 + pos], aff->v->el[0], v->n);
	} else if (isl_int_eq(aff->v->el[0], v->d)) {
		isl_int_add(aff->v->el[1 + pos], aff->v->el[1 + pos], v->n);
		aff->v = isl_vec_normalize(aff->v);
		if (!aff->v)
			goto error;
	} else {
		isl_seq_scale(aff->v->el + 1,
				aff->v->el + 1, v->d, aff->v->size - 1);
		isl_int_addmul(aff->v->el[1 + pos], aff->v->el[0], v->n);
		isl_int_mul(aff->v->el[0], aff->v->el[0], v->d);
		aff->v = isl_vec_normalize(aff->v);
		if (!aff->v)
			goto error;
	}

	isl_val_free(v);
	return aff;
error:
	isl_aff_free(aff);
	isl_val_free(v);
	return NULL;
}

__isl_give isl_aff *isl_aff_add_coefficient_si(__isl_take isl_aff *aff,
	enum isl_dim_type type, int pos, int v)
{
	isl_int t;

	isl_int_init(t);
	isl_int_set_si(t, v);
	aff = isl_aff_add_coefficient(aff, type, pos, t);
	isl_int_clear(t);

	return aff;
}

__isl_give isl_aff *isl_aff_get_div(__isl_keep isl_aff *aff, int pos)
{
	if (!aff)
		return NULL;

	return isl_local_space_get_div(aff->ls, pos);
}

__isl_give isl_aff *isl_aff_neg(__isl_take isl_aff *aff)
{
	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;
	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		return isl_aff_free(aff);

	isl_seq_neg(aff->v->el + 1, aff->v->el + 1, aff->v->size - 1);

	return aff;
}

/* Remove divs from the local space that do not appear in the affine
 * expression.
 * We currently only remove divs at the end.
 * Some intermediate divs may also not appear directly in the affine
 * expression, but we would also need to check that no other divs are
 * defined in terms of them.
 */
__isl_give isl_aff *isl_aff_remove_unused_divs( __isl_take isl_aff *aff)
{
	int pos;
	int off;
	int n;

	if (!aff)
		return NULL;

	n = isl_local_space_dim(aff->ls, isl_dim_div);
	off = isl_local_space_offset(aff->ls, isl_dim_div);

	pos = isl_seq_last_non_zero(aff->v->el + 1 + off, n) + 1;
	if (pos == n)
		return aff;

	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;

	aff->ls = isl_local_space_drop_dims(aff->ls, isl_dim_div, pos, n - pos);
	aff->v = isl_vec_drop_els(aff->v, 1 + off + pos, n - pos);
	if (!aff->ls || !aff->v)
		return isl_aff_free(aff);

	return aff;
}

/* Given two affine expressions "p" of length p_len (including the
 * denominator and the constant term) and "subs" of length subs_len,
 * plug in "subs" for the variable at position "pos".
 * The variables of "subs" and "p" are assumed to match up to subs_len,
 * but "p" may have additional variables.
 * "v" is an initialized isl_int that can be used internally.
 *
 * In particular, if "p" represents the expression
 *
 *	(a i + g)/m
 *
 * with i the variable at position "pos" and "subs" represents the expression
 *
 *	f/d
 *
 * then the result represents the expression
 *
 *	(a f + d g)/(m d)
 *
 */
void isl_seq_substitute(isl_int *p, int pos, isl_int *subs,
	int p_len, int subs_len, isl_int v)
{
	isl_int_set(v, p[1 + pos]);
	isl_int_set_si(p[1 + pos], 0);
	isl_seq_combine(p + 1, subs[0], p + 1, v, subs + 1, subs_len - 1);
	isl_seq_scale(p + subs_len, p + subs_len, subs[0], p_len - subs_len);
	isl_int_mul(p[0], p[0], subs[0]);
}

/* Look for any divs in the aff->ls with a denominator equal to one
 * and plug them into the affine expression and any subsequent divs
 * that may reference the div.
 */
static __isl_give isl_aff *plug_in_integral_divs(__isl_take isl_aff *aff)
{
	int i, n;
	int len;
	isl_int v;
	isl_vec *vec;
	isl_local_space *ls;
	unsigned pos;

	if (!aff)
		return NULL;

	n = isl_local_space_dim(aff->ls, isl_dim_div);
	len = aff->v->size;
	for (i = 0; i < n; ++i) {
		if (!isl_int_is_one(aff->ls->div->row[i][0]))
			continue;
		ls = isl_local_space_copy(aff->ls);
		ls = isl_local_space_substitute_seq(ls, isl_dim_div, i,
				aff->ls->div->row[i], len, i + 1, n - (i + 1));
		vec = isl_vec_copy(aff->v);
		vec = isl_vec_cow(vec);
		if (!ls || !vec)
			goto error;

		isl_int_init(v);

		pos = isl_local_space_offset(aff->ls, isl_dim_div) + i;
		isl_seq_substitute(vec->el, pos, aff->ls->div->row[i],
					len, len, v);

		isl_int_clear(v);

		isl_vec_free(aff->v);
		aff->v = vec;
		isl_local_space_free(aff->ls);
		aff->ls = ls;
	}

	return aff;
error:
	isl_vec_free(vec);
	isl_local_space_free(ls);
	return isl_aff_free(aff);
}

/* Look for any divs j that appear with a unit coefficient inside
 * the definitions of other divs i and plug them into the definitions
 * of the divs i.
 *
 * In particular, an expression of the form
 *
 *	floor((f(..) + floor(g(..)/n))/m)
 *
 * is simplified to
 *
 *	floor((n * f(..) + g(..))/(n * m))
 *
 * This simplification is correct because we can move the expression
 * f(..) into the inner floor in the original expression to obtain
 *
 *	floor(floor((n * f(..) + g(..))/n)/m)
 *
 * from which we can derive the simplified expression.
 */
static __isl_give isl_aff *plug_in_unit_divs(__isl_take isl_aff *aff)
{
	int i, j, n;
	int off;

	if (!aff)
		return NULL;

	n = isl_local_space_dim(aff->ls, isl_dim_div);
	off = isl_local_space_offset(aff->ls, isl_dim_div);
	for (i = 1; i < n; ++i) {
		for (j = 0; j < i; ++j) {
			if (!isl_int_is_one(aff->ls->div->row[i][1 + off + j]))
				continue;
			aff->ls = isl_local_space_substitute_seq(aff->ls,
				isl_dim_div, j, aff->ls->div->row[j],
				aff->v->size, i, 1);
			if (!aff->ls)
				return isl_aff_free(aff);
		}
	}

	return aff;
}

/* Swap divs "a" and "b" in "aff", which is assumed to be non-NULL.
 *
 * Even though this function is only called on isl_affs with a single
 * reference, we are careful to only change aff->v and aff->ls together.
 */
static __isl_give isl_aff *swap_div(__isl_take isl_aff *aff, int a, int b)
{
	unsigned off = isl_local_space_offset(aff->ls, isl_dim_div);
	isl_local_space *ls;
	isl_vec *v;

	ls = isl_local_space_copy(aff->ls);
	ls = isl_local_space_swap_div(ls, a, b);
	v = isl_vec_copy(aff->v);
	v = isl_vec_cow(v);
	if (!ls || !v)
		goto error;

	isl_int_swap(v->el[1 + off + a], v->el[1 + off + b]);
	isl_vec_free(aff->v);
	aff->v = v;
	isl_local_space_free(aff->ls);
	aff->ls = ls;

	return aff;
error:
	isl_vec_free(v);
	isl_local_space_free(ls);
	return isl_aff_free(aff);
}

/* Merge divs "a" and "b" in "aff", which is assumed to be non-NULL.
 *
 * We currently do not actually remove div "b", but simply add its
 * coefficient to that of "a" and then zero it out.
 */
static __isl_give isl_aff *merge_divs(__isl_take isl_aff *aff, int a, int b)
{
	unsigned off = isl_local_space_offset(aff->ls, isl_dim_div);

	if (isl_int_is_zero(aff->v->el[1 + off + b]))
		return aff;

	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		return isl_aff_free(aff);

	isl_int_add(aff->v->el[1 + off + a],
		    aff->v->el[1 + off + a], aff->v->el[1 + off + b]);
	isl_int_set_si(aff->v->el[1 + off + b], 0);

	return aff;
}

/* Sort the divs in the local space of "aff" according to
 * the comparison function "cmp_row" in isl_local_space.c,
 * combining the coefficients of identical divs.
 *
 * Reordering divs does not change the semantics of "aff",
 * so there is no need to call isl_aff_cow.
 * Moreover, this function is currently only called on isl_affs
 * with a single reference.
 */
static __isl_give isl_aff *sort_divs(__isl_take isl_aff *aff)
{
	int i, j, n;
	unsigned off;

	if (!aff)
		return NULL;

	off = isl_local_space_offset(aff->ls, isl_dim_div);
	n = isl_aff_dim(aff, isl_dim_div);
	for (i = 1; i < n; ++i) {
		for (j = i - 1; j >= 0; --j) {
			int cmp = isl_mat_cmp_div(aff->ls->div, j, j + 1);
			if (cmp < 0)
				break;
			if (cmp == 0)
				aff = merge_divs(aff, j, j + 1);
			else
				aff = swap_div(aff, j, j + 1);
			if (!aff)
				return NULL;
		}
	}

	return aff;
}

/* Normalize the representation of "aff".
 *
 * This function should only be called of "new" isl_affs, i.e.,
 * with only a single reference.  We therefore do not need to
 * worry about affecting other instances.
 */
__isl_give isl_aff *isl_aff_normalize(__isl_take isl_aff *aff)
{
	if (!aff)
		return NULL;
	aff->v = isl_vec_normalize(aff->v);
	if (!aff->v)
		return isl_aff_free(aff);
	aff = plug_in_integral_divs(aff);
	aff = plug_in_unit_divs(aff);
	aff = sort_divs(aff);
	aff = isl_aff_remove_unused_divs(aff);
	return aff;
}

/* Given f, return floor(f).
 * If f is an integer expression, then just return f.
 * If f is a constant, then return the constant floor(f).
 * Otherwise, if f = g/m, write g = q m + r,
 * create a new div d = [r/m] and return the expression q + d.
 * The coefficients in r are taken to lie between -m/2 and m/2.
 */
__isl_give isl_aff *isl_aff_floor(__isl_take isl_aff *aff)
{
	int i;
	int size;
	isl_ctx *ctx;
	isl_vec *div;

	if (!aff)
		return NULL;

	if (isl_int_is_one(aff->v->el[0]))
		return aff;

	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;

	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		return isl_aff_free(aff);

	if (isl_aff_is_cst(aff)) {
		isl_int_fdiv_q(aff->v->el[1], aff->v->el[1], aff->v->el[0]);
		isl_int_set_si(aff->v->el[0], 1);
		return aff;
	}

	div = isl_vec_copy(aff->v);
	div = isl_vec_cow(div);
	if (!div)
		return isl_aff_free(aff);

	ctx = isl_aff_get_ctx(aff);
	isl_int_fdiv_q(aff->v->el[0], aff->v->el[0], ctx->two);
	for (i = 1; i < aff->v->size; ++i) {
		isl_int_fdiv_r(div->el[i], div->el[i], div->el[0]);
		isl_int_fdiv_q(aff->v->el[i], aff->v->el[i], div->el[0]);
		if (isl_int_gt(div->el[i], aff->v->el[0])) {
			isl_int_sub(div->el[i], div->el[i], div->el[0]);
			isl_int_add_ui(aff->v->el[i], aff->v->el[i], 1);
		}
	}

	aff->ls = isl_local_space_add_div(aff->ls, div);
	if (!aff->ls)
		return isl_aff_free(aff);

	size = aff->v->size;
	aff->v = isl_vec_extend(aff->v, size + 1);
	if (!aff->v)
		return isl_aff_free(aff);
	isl_int_set_si(aff->v->el[0], 1);
	isl_int_set_si(aff->v->el[size], 1);

	aff = isl_aff_normalize(aff);

	return aff;
}

/* Compute
 *
 *	aff mod m = aff - m * floor(aff/m)
 */
__isl_give isl_aff *isl_aff_mod(__isl_take isl_aff *aff, isl_int m)
{
	isl_aff *res;

	res = isl_aff_copy(aff);
	aff = isl_aff_scale_down(aff, m);
	aff = isl_aff_floor(aff);
	aff = isl_aff_scale(aff, m);
	res = isl_aff_sub(res, aff);

	return res;
}

/* Compute
 *
 *	aff mod m = aff - m * floor(aff/m)
 *
 * with m an integer value.
 */
__isl_give isl_aff *isl_aff_mod_val(__isl_take isl_aff *aff,
	__isl_take isl_val *m)
{
	isl_aff *res;

	if (!aff || !m)
		goto error;

	if (!isl_val_is_int(m))
		isl_die(isl_val_get_ctx(m), isl_error_invalid,
			"expecting integer modulo", goto error);

	res = isl_aff_copy(aff);
	aff = isl_aff_scale_down_val(aff, isl_val_copy(m));
	aff = isl_aff_floor(aff);
	aff = isl_aff_scale_val(aff, m);
	res = isl_aff_sub(res, aff);

	return res;
error:
	isl_aff_free(aff);
	isl_val_free(m);
	return NULL;
}

/* Compute
 *
 *	pwaff mod m = pwaff - m * floor(pwaff/m)
 */
__isl_give isl_pw_aff *isl_pw_aff_mod(__isl_take isl_pw_aff *pwaff, isl_int m)
{
	isl_pw_aff *res;

	res = isl_pw_aff_copy(pwaff);
	pwaff = isl_pw_aff_scale_down(pwaff, m);
	pwaff = isl_pw_aff_floor(pwaff);
	pwaff = isl_pw_aff_scale(pwaff, m);
	res = isl_pw_aff_sub(res, pwaff);

	return res;
}

/* Compute
 *
 *	pa mod m = pa - m * floor(pa/m)
 *
 * with m an integer value.
 */
__isl_give isl_pw_aff *isl_pw_aff_mod_val(__isl_take isl_pw_aff *pa,
	__isl_take isl_val *m)
{
	if (!pa || !m)
		goto error;
	if (!isl_val_is_int(m))
		isl_die(isl_pw_aff_get_ctx(pa), isl_error_invalid,
			"expecting integer modulo", goto error);
	pa = isl_pw_aff_mod(pa, m->n);
	isl_val_free(m);
	return pa;
error:
	isl_pw_aff_free(pa);
	isl_val_free(m);
	return NULL;
}

/* Given f, return ceil(f).
 * If f is an integer expression, then just return f.
 * Otherwise, let f be the expression
 *
 *	e/m
 *
 * then return
 *
 *	floor((e + m - 1)/m)
 */
__isl_give isl_aff *isl_aff_ceil(__isl_take isl_aff *aff)
{
	if (!aff)
		return NULL;

	if (isl_int_is_one(aff->v->el[0]))
		return aff;

	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;
	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		return isl_aff_free(aff);

	isl_int_add(aff->v->el[1], aff->v->el[1], aff->v->el[0]);
	isl_int_sub_ui(aff->v->el[1], aff->v->el[1], 1);
	aff = isl_aff_floor(aff);

	return aff;
}

/* Apply the expansion computed by isl_merge_divs.
 * The expansion itself is given by "exp" while the resulting
 * list of divs is given by "div".
 */
__isl_give isl_aff *isl_aff_expand_divs( __isl_take isl_aff *aff,
	__isl_take isl_mat *div, int *exp)
{
	int i, j;
	int old_n_div;
	int new_n_div;
	int offset;

	aff = isl_aff_cow(aff);
	if (!aff || !div)
		goto error;

	old_n_div = isl_local_space_dim(aff->ls, isl_dim_div);
	new_n_div = isl_mat_rows(div);
	if (new_n_div < old_n_div)
		isl_die(isl_mat_get_ctx(div), isl_error_invalid,
			"not an expansion", goto error);

	aff->v = isl_vec_extend(aff->v, aff->v->size + new_n_div - old_n_div);
	if (!aff->v)
		goto error;

	offset = 1 + isl_local_space_offset(aff->ls, isl_dim_div);
	j = old_n_div - 1;
	for (i = new_n_div - 1; i >= 0; --i) {
		if (j >= 0 && exp[j] == i) {
			if (i != j)
				isl_int_swap(aff->v->el[offset + i],
					     aff->v->el[offset + j]);
			j--;
		} else
			isl_int_set_si(aff->v->el[offset + i], 0);
	}

	aff->ls = isl_local_space_replace_divs(aff->ls, isl_mat_copy(div));
	if (!aff->ls)
		goto error;
	isl_mat_free(div);
	return aff;
error:
	isl_aff_free(aff);
	isl_mat_free(div);
	return NULL;
}

/* Add two affine expressions that live in the same local space.
 */
static __isl_give isl_aff *add_expanded(__isl_take isl_aff *aff1,
	__isl_take isl_aff *aff2)
{
	isl_int gcd, f;

	aff1 = isl_aff_cow(aff1);
	if (!aff1 || !aff2)
		goto error;

	aff1->v = isl_vec_cow(aff1->v);
	if (!aff1->v)
		goto error;

	isl_int_init(gcd);
	isl_int_init(f);
	isl_int_gcd(gcd, aff1->v->el[0], aff2->v->el[0]);
	isl_int_divexact(f, aff2->v->el[0], gcd);
	isl_seq_scale(aff1->v->el + 1, aff1->v->el + 1, f, aff1->v->size - 1);
	isl_int_divexact(f, aff1->v->el[0], gcd);
	isl_seq_addmul(aff1->v->el + 1, f, aff2->v->el + 1, aff1->v->size - 1);
	isl_int_divexact(f, aff2->v->el[0], gcd);
	isl_int_mul(aff1->v->el[0], aff1->v->el[0], f);
	isl_int_clear(f);
	isl_int_clear(gcd);

	isl_aff_free(aff2);
	return aff1;
error:
	isl_aff_free(aff1);
	isl_aff_free(aff2);
	return NULL;
}

__isl_give isl_aff *isl_aff_add(__isl_take isl_aff *aff1,
	__isl_take isl_aff *aff2)
{
	isl_ctx *ctx;
	int *exp1 = NULL;
	int *exp2 = NULL;
	isl_mat *div;
	int n_div1, n_div2;

	if (!aff1 || !aff2)
		goto error;

	ctx = isl_aff_get_ctx(aff1);
	if (!isl_space_is_equal(aff1->ls->dim, aff2->ls->dim))
		isl_die(ctx, isl_error_invalid,
			"spaces don't match", goto error);

	n_div1 = isl_aff_dim(aff1, isl_dim_div);
	n_div2 = isl_aff_dim(aff2, isl_dim_div);
	if (n_div1 == 0 && n_div2 == 0)
		return add_expanded(aff1, aff2);

	exp1 = isl_alloc_array(ctx, int, n_div1);
	exp2 = isl_alloc_array(ctx, int, n_div2);
	if ((n_div1 && !exp1) || (n_div2 && !exp2))
		goto error;

	div = isl_merge_divs(aff1->ls->div, aff2->ls->div, exp1, exp2);
	aff1 = isl_aff_expand_divs(aff1, isl_mat_copy(div), exp1);
	aff2 = isl_aff_expand_divs(aff2, div, exp2);
	free(exp1);
	free(exp2);

	return add_expanded(aff1, aff2);
error:
	free(exp1);
	free(exp2);
	isl_aff_free(aff1);
	isl_aff_free(aff2);
	return NULL;
}

__isl_give isl_aff *isl_aff_sub(__isl_take isl_aff *aff1,
	__isl_take isl_aff *aff2)
{
	return isl_aff_add(aff1, isl_aff_neg(aff2));
}

__isl_give isl_aff *isl_aff_scale(__isl_take isl_aff *aff, isl_int f)
{
	isl_int gcd;

	if (isl_int_is_one(f))
		return aff;

	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;
	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		return isl_aff_free(aff);

	if (isl_int_is_pos(f) && isl_int_is_divisible_by(aff->v->el[0], f)) {
		isl_int_divexact(aff->v->el[0], aff->v->el[0], f);
		return aff;
	}

	isl_int_init(gcd);
	isl_int_gcd(gcd, aff->v->el[0], f);
	isl_int_divexact(aff->v->el[0], aff->v->el[0], gcd);
	isl_int_divexact(gcd, f, gcd);
	isl_seq_scale(aff->v->el + 1, aff->v->el + 1, gcd, aff->v->size - 1);
	isl_int_clear(gcd);

	return aff;
}

/* Multiple "aff" by "v".
 */
__isl_give isl_aff *isl_aff_scale_val(__isl_take isl_aff *aff,
	__isl_take isl_val *v)
{
	if (!aff || !v)
		goto error;

	if (isl_val_is_one(v)) {
		isl_val_free(v);
		return aff;
	}

	if (!isl_val_is_rat(v))
		isl_die(isl_aff_get_ctx(aff), isl_error_invalid,
			"expecting rational factor", goto error);

	aff = isl_aff_scale(aff, v->n);
	aff = isl_aff_scale_down(aff, v->d);

	isl_val_free(v);
	return aff;
error:
	isl_aff_free(aff);
	isl_val_free(v);
	return NULL;
}

__isl_give isl_aff *isl_aff_scale_down(__isl_take isl_aff *aff, isl_int f)
{
	isl_int gcd;

	if (isl_int_is_one(f))
		return aff;

	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;

	if (isl_int_is_zero(f))
		isl_die(isl_aff_get_ctx(aff), isl_error_invalid,
			"cannot scale down by zero", return isl_aff_free(aff));

	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		return isl_aff_free(aff);

	isl_int_init(gcd);
	isl_seq_gcd(aff->v->el + 1, aff->v->size - 1, &gcd);
	isl_int_gcd(gcd, gcd, f);
	isl_seq_scale_down(aff->v->el + 1, aff->v->el + 1, gcd, aff->v->size - 1);
	isl_int_divexact(gcd, f, gcd);
	isl_int_mul(aff->v->el[0], aff->v->el[0], gcd);
	isl_int_clear(gcd);

	return aff;
}

/* Divide "aff" by "v".
 */
__isl_give isl_aff *isl_aff_scale_down_val(__isl_take isl_aff *aff,
	__isl_take isl_val *v)
{
	if (!aff || !v)
		goto error;

	if (isl_val_is_one(v)) {
		isl_val_free(v);
		return aff;
	}

	if (!isl_val_is_rat(v))
		isl_die(isl_aff_get_ctx(aff), isl_error_invalid,
			"expecting rational factor", goto error);
	if (!isl_val_is_pos(v))
		isl_die(isl_aff_get_ctx(aff), isl_error_invalid,
			"factor needs to be positive", goto error);

	aff = isl_aff_scale(aff, v->d);
	aff = isl_aff_scale_down(aff, v->n);

	isl_val_free(v);
	return aff;
error:
	isl_aff_free(aff);
	isl_val_free(v);
	return NULL;
}

__isl_give isl_aff *isl_aff_scale_down_ui(__isl_take isl_aff *aff, unsigned f)
{
	isl_int v;

	if (f == 1)
		return aff;

	isl_int_init(v);
	isl_int_set_ui(v, f);
	aff = isl_aff_scale_down(aff, v);
	isl_int_clear(v);

	return aff;
}

__isl_give isl_aff *isl_aff_set_dim_name(__isl_take isl_aff *aff,
	enum isl_dim_type type, unsigned pos, const char *s)
{
	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;
	if (type == isl_dim_out)
		isl_die(aff->v->ctx, isl_error_invalid,
			"cannot set name of output/set dimension",
			return isl_aff_free(aff));
	if (type == isl_dim_in)
		type = isl_dim_set;
	aff->ls = isl_local_space_set_dim_name(aff->ls, type, pos, s);
	if (!aff->ls)
		return isl_aff_free(aff);

	return aff;
}

__isl_give isl_aff *isl_aff_set_dim_id(__isl_take isl_aff *aff,
	enum isl_dim_type type, unsigned pos, __isl_take isl_id *id)
{
	aff = isl_aff_cow(aff);
	if (!aff)
		return isl_id_free(id);
	if (type == isl_dim_out)
		isl_die(aff->v->ctx, isl_error_invalid,
			"cannot set name of output/set dimension",
			goto error);
	if (type == isl_dim_in)
		type = isl_dim_set;
	aff->ls = isl_local_space_set_dim_id(aff->ls, type, pos, id);
	if (!aff->ls)
		return isl_aff_free(aff);

	return aff;
error:
	isl_id_free(id);
	isl_aff_free(aff);
	return NULL;
}

/* Exploit the equalities in "eq" to simplify the affine expression
 * and the expressions of the integer divisions in the local space.
 * The integer divisions in this local space are assumed to appear
 * as regular dimensions in "eq".
 */
static __isl_give isl_aff *isl_aff_substitute_equalities_lifted(
	__isl_take isl_aff *aff, __isl_take isl_basic_set *eq)
{
	int i, j;
	unsigned total;
	unsigned n_div;

	if (!eq)
		goto error;
	if (eq->n_eq == 0) {
		isl_basic_set_free(eq);
		return aff;
	}

	aff = isl_aff_cow(aff);
	if (!aff)
		goto error;

	aff->ls = isl_local_space_substitute_equalities(aff->ls,
							isl_basic_set_copy(eq));
	aff->v = isl_vec_cow(aff->v);
	if (!aff->ls || !aff->v)
		goto error;

	total = 1 + isl_space_dim(eq->dim, isl_dim_all);
	n_div = eq->n_div;
	for (i = 0; i < eq->n_eq; ++i) {
		j = isl_seq_last_non_zero(eq->eq[i], total + n_div);
		if (j < 0 || j == 0 || j >= total)
			continue;

		isl_seq_elim(aff->v->el + 1, eq->eq[i], j, total,
				&aff->v->el[0]);
	}

	isl_basic_set_free(eq);
	aff = isl_aff_normalize(aff);
	return aff;
error:
	isl_basic_set_free(eq);
	isl_aff_free(aff);
	return NULL;
}

/* Exploit the equalities in "eq" to simplify the affine expression
 * and the expressions of the integer divisions in the local space.
 */
static __isl_give isl_aff *isl_aff_substitute_equalities(
	__isl_take isl_aff *aff, __isl_take isl_basic_set *eq)
{
	int n_div;

	if (!aff || !eq)
		goto error;
	n_div = isl_local_space_dim(aff->ls, isl_dim_div);
	if (n_div > 0)
		eq = isl_basic_set_add_dims(eq, isl_dim_set, n_div);
	return isl_aff_substitute_equalities_lifted(aff, eq);
error:
	isl_basic_set_free(eq);
	isl_aff_free(aff);
	return NULL;
}

/* Look for equalities among the variables shared by context and aff
 * and the integer divisions of aff, if any.
 * The equalities are then used to eliminate coefficients and/or integer
 * divisions from aff.
 */
__isl_give isl_aff *isl_aff_gist(__isl_take isl_aff *aff,
	__isl_take isl_set *context)
{
	isl_basic_set *hull;
	int n_div;

	if (!aff)
		goto error;
	n_div = isl_local_space_dim(aff->ls, isl_dim_div);
	if (n_div > 0) {
		isl_basic_set *bset;
		isl_local_space *ls;
		context = isl_set_add_dims(context, isl_dim_set, n_div);
		ls = isl_aff_get_domain_local_space(aff);
		bset = isl_basic_set_from_local_space(ls);
		bset = isl_basic_set_lift(bset);
		bset = isl_basic_set_flatten(bset);
		context = isl_set_intersect(context,
					    isl_set_from_basic_set(bset));
	}

	hull = isl_set_affine_hull(context);
	return isl_aff_substitute_equalities_lifted(aff, hull);
error:
	isl_aff_free(aff);
	isl_set_free(context);
	return NULL;
}

__isl_give isl_aff *isl_aff_gist_params(__isl_take isl_aff *aff,
	__isl_take isl_set *context)
{
	isl_set *dom_context = isl_set_universe(isl_aff_get_domain_space(aff));
	dom_context = isl_set_intersect_params(dom_context, context);
	return isl_aff_gist(aff, dom_context);
}

/* Return a basic set containing those elements in the space
 * of aff where it is non-negative.
 * If "rational" is set, then return a rational basic set.
 */
static __isl_give isl_basic_set *aff_nonneg_basic_set(
	__isl_take isl_aff *aff, int rational)
{
	isl_constraint *ineq;
	isl_basic_set *bset;

	ineq = isl_inequality_from_aff(aff);

	bset = isl_basic_set_from_constraint(ineq);
	if (rational)
		bset = isl_basic_set_set_rational(bset);
	bset = isl_basic_set_simplify(bset);
	return bset;
}

/* Return a basic set containing those elements in the space
 * of aff where it is non-negative.
 */
__isl_give isl_basic_set *isl_aff_nonneg_basic_set(__isl_take isl_aff *aff)
{
	return aff_nonneg_basic_set(aff, 0);
}

/* Return a basic set containing those elements in the domain space
 * of aff where it is negative.
 */
__isl_give isl_basic_set *isl_aff_neg_basic_set(__isl_take isl_aff *aff)
{
	aff = isl_aff_neg(aff);
	aff = isl_aff_add_constant_num_si(aff, -1);
	return isl_aff_nonneg_basic_set(aff);
}

/* Return a basic set containing those elements in the space
 * of aff where it is zero.
 * If "rational" is set, then return a rational basic set.
 */
static __isl_give isl_basic_set *aff_zero_basic_set(__isl_take isl_aff *aff,
	int rational)
{
	isl_constraint *ineq;
	isl_basic_set *bset;

	ineq = isl_equality_from_aff(aff);

	bset = isl_basic_set_from_constraint(ineq);
	if (rational)
		bset = isl_basic_set_set_rational(bset);
	bset = isl_basic_set_simplify(bset);
	return bset;
}

/* Return a basic set containing those elements in the space
 * of aff where it is zero.
 */
__isl_give isl_basic_set *isl_aff_zero_basic_set(__isl_take isl_aff *aff)
{
	return aff_zero_basic_set(aff, 0);
}

/* Return a basic set containing those elements in the shared space
 * of aff1 and aff2 where aff1 is greater than or equal to aff2.
 */
__isl_give isl_basic_set *isl_aff_ge_basic_set(__isl_take isl_aff *aff1,
	__isl_take isl_aff *aff2)
{
	aff1 = isl_aff_sub(aff1, aff2);

	return isl_aff_nonneg_basic_set(aff1);
}

/* Return a basic set containing those elements in the shared space
 * of aff1 and aff2 where aff1 is smaller than or equal to aff2.
 */
__isl_give isl_basic_set *isl_aff_le_basic_set(__isl_take isl_aff *aff1,
	__isl_take isl_aff *aff2)
{
	return isl_aff_ge_basic_set(aff2, aff1);
}

__isl_give isl_aff *isl_aff_add_on_domain(__isl_keep isl_set *dom,
	__isl_take isl_aff *aff1, __isl_take isl_aff *aff2)
{
	aff1 = isl_aff_add(aff1, aff2);
	aff1 = isl_aff_gist(aff1, isl_set_copy(dom));
	return aff1;
}

int isl_aff_is_empty(__isl_keep isl_aff *aff)
{
	if (!aff)
		return -1;

	return 0;
}

/* Check whether the given affine expression has non-zero coefficient
 * for any dimension in the given range or if any of these dimensions
 * appear with non-zero coefficients in any of the integer divisions
 * involved in the affine expression.
 */
int isl_aff_involves_dims(__isl_keep isl_aff *aff,
	enum isl_dim_type type, unsigned first, unsigned n)
{
	int i;
	isl_ctx *ctx;
	int *active = NULL;
	int involves = 0;

	if (!aff)
		return -1;
	if (n == 0)
		return 0;

	ctx = isl_aff_get_ctx(aff);
	if (first + n > isl_aff_dim(aff, type))
		isl_die(ctx, isl_error_invalid,
			"range out of bounds", return -1);

	active = isl_local_space_get_active(aff->ls, aff->v->el + 2);
	if (!active)
		goto error;

	first += isl_local_space_offset(aff->ls, type) - 1;
	for (i = 0; i < n; ++i)
		if (active[first + i]) {
			involves = 1;
			break;
		}

	free(active);

	return involves;
error:
	free(active);
	return -1;
}

__isl_give isl_aff *isl_aff_drop_dims(__isl_take isl_aff *aff,
	enum isl_dim_type type, unsigned first, unsigned n)
{
	isl_ctx *ctx;

	if (!aff)
		return NULL;
	if (type == isl_dim_out)
		isl_die(aff->v->ctx, isl_error_invalid,
			"cannot drop output/set dimension",
			return isl_aff_free(aff));
	if (type == isl_dim_in)
		type = isl_dim_set;
	if (n == 0 && !isl_local_space_is_named_or_nested(aff->ls, type))
		return aff;

	ctx = isl_aff_get_ctx(aff);
	if (first + n > isl_local_space_dim(aff->ls, type))
		isl_die(ctx, isl_error_invalid, "range out of bounds",
			return isl_aff_free(aff));

	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;

	aff->ls = isl_local_space_drop_dims(aff->ls, type, first, n);
	if (!aff->ls)
		return isl_aff_free(aff);

	first += 1 + isl_local_space_offset(aff->ls, type);
	aff->v = isl_vec_drop_els(aff->v, first, n);
	if (!aff->v)
		return isl_aff_free(aff);

	return aff;
}

/* Project the domain of the affine expression onto its parameter space.
 * The affine expression may not involve any of the domain dimensions.
 */
__isl_give isl_aff *isl_aff_project_domain_on_params(__isl_take isl_aff *aff)
{
	isl_space *space;
	unsigned n;
	int involves;

	n = isl_aff_dim(aff, isl_dim_in);
	involves = isl_aff_involves_dims(aff, isl_dim_in, 0, n);
	if (involves < 0)
		return isl_aff_free(aff);
	if (involves)
		isl_die(isl_aff_get_ctx(aff), isl_error_invalid,
		    "affine expression involves some of the domain dimensions",
		    return isl_aff_free(aff));
	aff = isl_aff_drop_dims(aff, isl_dim_in, 0, n);
	space = isl_aff_get_domain_space(aff);
	space = isl_space_params(space);
	aff = isl_aff_reset_domain_space(aff, space);
	return aff;
}

__isl_give isl_aff *isl_aff_insert_dims(__isl_take isl_aff *aff,
	enum isl_dim_type type, unsigned first, unsigned n)
{
	isl_ctx *ctx;

	if (!aff)
		return NULL;
	if (type == isl_dim_out)
		isl_die(aff->v->ctx, isl_error_invalid,
			"cannot insert output/set dimensions",
			return isl_aff_free(aff));
	if (type == isl_dim_in)
		type = isl_dim_set;
	if (n == 0 && !isl_local_space_is_named_or_nested(aff->ls, type))
		return aff;

	ctx = isl_aff_get_ctx(aff);
	if (first > isl_local_space_dim(aff->ls, type))
		isl_die(ctx, isl_error_invalid, "position out of bounds",
			return isl_aff_free(aff));

	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;

	aff->ls = isl_local_space_insert_dims(aff->ls, type, first, n);
	if (!aff->ls)
		return isl_aff_free(aff);

	first += 1 + isl_local_space_offset(aff->ls, type);
	aff->v = isl_vec_insert_zero_els(aff->v, first, n);
	if (!aff->v)
		return isl_aff_free(aff);

	return aff;
}

__isl_give isl_aff *isl_aff_add_dims(__isl_take isl_aff *aff,
	enum isl_dim_type type, unsigned n)
{
	unsigned pos;

	pos = isl_aff_dim(aff, type);

	return isl_aff_insert_dims(aff, type, pos, n);
}

__isl_give isl_pw_aff *isl_pw_aff_add_dims(__isl_take isl_pw_aff *pwaff,
	enum isl_dim_type type, unsigned n)
{
	unsigned pos;

	pos = isl_pw_aff_dim(pwaff, type);

	return isl_pw_aff_insert_dims(pwaff, type, pos, n);
}

__isl_give isl_pw_aff *isl_pw_aff_from_aff(__isl_take isl_aff *aff)
{
	isl_set *dom = isl_set_universe(isl_aff_get_domain_space(aff));
	return isl_pw_aff_alloc(dom, aff);
}

#undef PW
#define PW isl_pw_aff
#undef EL
#define EL isl_aff
#undef EL_IS_ZERO
#define EL_IS_ZERO is_empty
#undef ZERO
#define ZERO empty
#undef IS_ZERO
#define IS_ZERO is_empty
#undef FIELD
#define FIELD aff
#undef DEFAULT_IS_ZERO
#define DEFAULT_IS_ZERO 0

#define NO_EVAL
#define NO_OPT
#define NO_MOVE_DIMS
#define NO_LIFT
#define NO_MORPH

#include <isl_pw_templ.c>

static __isl_give isl_set *align_params_pw_pw_set_and(
	__isl_take isl_pw_aff *pwaff1, __isl_take isl_pw_aff *pwaff2,
	__isl_give isl_set *(*fn)(__isl_take isl_pw_aff *pwaff1,
				    __isl_take isl_pw_aff *pwaff2))
{
	if (!pwaff1 || !pwaff2)
		goto error;
	if (isl_space_match(pwaff1->dim, isl_dim_param,
			  pwaff2->dim, isl_dim_param))
		return fn(pwaff1, pwaff2);
	if (!isl_space_has_named_params(pwaff1->dim) ||
	    !isl_space_has_named_params(pwaff2->dim))
		isl_die(isl_pw_aff_get_ctx(pwaff1), isl_error_invalid,
			"unaligned unnamed parameters", goto error);
	pwaff1 = isl_pw_aff_align_params(pwaff1, isl_pw_aff_get_space(pwaff2));
	pwaff2 = isl_pw_aff_align_params(pwaff2, isl_pw_aff_get_space(pwaff1));
	return fn(pwaff1, pwaff2);
error:
	isl_pw_aff_free(pwaff1);
	isl_pw_aff_free(pwaff2);
	return NULL;
}

/* Compute a piecewise quasi-affine expression with a domain that
 * is the union of those of pwaff1 and pwaff2 and such that on each
 * cell, the quasi-affine expression is the better (according to cmp)
 * of those of pwaff1 and pwaff2.  If only one of pwaff1 or pwaff2
 * is defined on a given cell, then the associated expression
 * is the defined one.
 */
static __isl_give isl_pw_aff *pw_aff_union_opt(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2,
	__isl_give isl_basic_set *(*cmp)(__isl_take isl_aff *aff1,
					__isl_take isl_aff *aff2))
{
	int i, j, n;
	isl_pw_aff *res;
	isl_ctx *ctx;
	isl_set *set;

	if (!pwaff1 || !pwaff2)
		goto error;

	ctx = isl_space_get_ctx(pwaff1->dim);
	if (!isl_space_is_equal(pwaff1->dim, pwaff2->dim))
		isl_die(ctx, isl_error_invalid,
			"arguments should live in same space", goto error);

	if (isl_pw_aff_is_empty(pwaff1)) {
		isl_pw_aff_free(pwaff1);
		return pwaff2;
	}

	if (isl_pw_aff_is_empty(pwaff2)) {
		isl_pw_aff_free(pwaff2);
		return pwaff1;
	}

	n = 2 * (pwaff1->n + 1) * (pwaff2->n + 1);
	res = isl_pw_aff_alloc_size(isl_space_copy(pwaff1->dim), n);

	for (i = 0; i < pwaff1->n; ++i) {
		set = isl_set_copy(pwaff1->p[i].set);
		for (j = 0; j < pwaff2->n; ++j) {
			struct isl_set *common;
			isl_set *better;

			common = isl_set_intersect(
					isl_set_copy(pwaff1->p[i].set),
					isl_set_copy(pwaff2->p[j].set));
			better = isl_set_from_basic_set(cmp(
					isl_aff_copy(pwaff2->p[j].aff),
					isl_aff_copy(pwaff1->p[i].aff)));
			better = isl_set_intersect(common, better);
			if (isl_set_plain_is_empty(better)) {
				isl_set_free(better);
				continue;
			}
			set = isl_set_subtract(set, isl_set_copy(better));

			res = isl_pw_aff_add_piece(res, better,
						isl_aff_copy(pwaff2->p[j].aff));
		}
		res = isl_pw_aff_add_piece(res, set,
						isl_aff_copy(pwaff1->p[i].aff));
	}

	for (j = 0; j < pwaff2->n; ++j) {
		set = isl_set_copy(pwaff2->p[j].set);
		for (i = 0; i < pwaff1->n; ++i)
			set = isl_set_subtract(set,
					isl_set_copy(pwaff1->p[i].set));
		res = isl_pw_aff_add_piece(res, set,
						isl_aff_copy(pwaff2->p[j].aff));
	}

	isl_pw_aff_free(pwaff1);
	isl_pw_aff_free(pwaff2);

	return res;
error:
	isl_pw_aff_free(pwaff1);
	isl_pw_aff_free(pwaff2);
	return NULL;
}

/* Compute a piecewise quasi-affine expression with a domain that
 * is the union of those of pwaff1 and pwaff2 and such that on each
 * cell, the quasi-affine expression is the maximum of those of pwaff1
 * and pwaff2.  If only one of pwaff1 or pwaff2 is defined on a given
 * cell, then the associated expression is the defined one.
 */
static __isl_give isl_pw_aff *pw_aff_union_max(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return pw_aff_union_opt(pwaff1, pwaff2, &isl_aff_ge_basic_set);
}

__isl_give isl_pw_aff *isl_pw_aff_union_max(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return isl_pw_aff_align_params_pw_pw_and(pwaff1, pwaff2,
							&pw_aff_union_max);
}

/* Compute a piecewise quasi-affine expression with a domain that
 * is the union of those of pwaff1 and pwaff2 and such that on each
 * cell, the quasi-affine expression is the minimum of those of pwaff1
 * and pwaff2.  If only one of pwaff1 or pwaff2 is defined on a given
 * cell, then the associated expression is the defined one.
 */
static __isl_give isl_pw_aff *pw_aff_union_min(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return pw_aff_union_opt(pwaff1, pwaff2, &isl_aff_le_basic_set);
}

__isl_give isl_pw_aff *isl_pw_aff_union_min(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return isl_pw_aff_align_params_pw_pw_and(pwaff1, pwaff2,
							&pw_aff_union_min);
}

__isl_give isl_pw_aff *isl_pw_aff_union_opt(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2, int max)
{
	if (max)
		return isl_pw_aff_union_max(pwaff1, pwaff2);
	else
		return isl_pw_aff_union_min(pwaff1, pwaff2);
}

/* Construct a map with as domain the domain of pwaff and
 * one-dimensional range corresponding to the affine expressions.
 */
static __isl_give isl_map *map_from_pw_aff(__isl_take isl_pw_aff *pwaff)
{
	int i;
	isl_space *dim;
	isl_map *map;

	if (!pwaff)
		return NULL;

	dim = isl_pw_aff_get_space(pwaff);
	map = isl_map_empty(dim);

	for (i = 0; i < pwaff->n; ++i) {
		isl_basic_map *bmap;
		isl_map *map_i;

		bmap = isl_basic_map_from_aff(isl_aff_copy(pwaff->p[i].aff));
		map_i = isl_map_from_basic_map(bmap);
		map_i = isl_map_intersect_domain(map_i,
						isl_set_copy(pwaff->p[i].set));
		map = isl_map_union_disjoint(map, map_i);
	}

	isl_pw_aff_free(pwaff);

	return map;
}

/* Construct a map with as domain the domain of pwaff and
 * one-dimensional range corresponding to the affine expressions.
 */
__isl_give isl_map *isl_map_from_pw_aff(__isl_take isl_pw_aff *pwaff)
{
	if (!pwaff)
		return NULL;
	if (isl_space_is_set(pwaff->dim))
		isl_die(isl_pw_aff_get_ctx(pwaff), isl_error_invalid,
			"space of input is not a map",
			return isl_pw_aff_free(pwaff));
	return map_from_pw_aff(pwaff);
}

/* Construct a one-dimensional set with as parameter domain
 * the domain of pwaff and the single set dimension
 * corresponding to the affine expressions.
 */
__isl_give isl_set *isl_set_from_pw_aff(__isl_take isl_pw_aff *pwaff)
{
	if (!pwaff)
		return NULL;
	if (!isl_space_is_set(pwaff->dim))
		isl_die(isl_pw_aff_get_ctx(pwaff), isl_error_invalid,
			"space of input is not a set",
			return isl_pw_aff_free(pwaff));
	return map_from_pw_aff(pwaff);
}

/* Return a set containing those elements in the domain
 * of pwaff where it is non-negative.
 */
__isl_give isl_set *isl_pw_aff_nonneg_set(__isl_take isl_pw_aff *pwaff)
{
	int i;
	isl_set *set;

	if (!pwaff)
		return NULL;

	set = isl_set_empty(isl_pw_aff_get_domain_space(pwaff));

	for (i = 0; i < pwaff->n; ++i) {
		isl_basic_set *bset;
		isl_set *set_i;
		int rational;

		rational = isl_set_has_rational(pwaff->p[i].set);
		bset = aff_nonneg_basic_set(isl_aff_copy(pwaff->p[i].aff),
						rational);
		set_i = isl_set_from_basic_set(bset);
		set_i = isl_set_intersect(set_i, isl_set_copy(pwaff->p[i].set));
		set = isl_set_union_disjoint(set, set_i);
	}

	isl_pw_aff_free(pwaff);

	return set;
}

/* Return a set containing those elements in the domain
 * of pwaff where it is zero (if complement is 0) or not zero
 * (if complement is 1).
 */
static __isl_give isl_set *pw_aff_zero_set(__isl_take isl_pw_aff *pwaff,
	int complement)
{
	int i;
	isl_set *set;

	if (!pwaff)
		return NULL;

	set = isl_set_empty(isl_pw_aff_get_domain_space(pwaff));

	for (i = 0; i < pwaff->n; ++i) {
		isl_basic_set *bset;
		isl_set *set_i, *zero;
		int rational;

		rational = isl_set_has_rational(pwaff->p[i].set);
		bset = aff_zero_basic_set(isl_aff_copy(pwaff->p[i].aff),
						rational);
		zero = isl_set_from_basic_set(bset);
		set_i = isl_set_copy(pwaff->p[i].set);
		if (complement)
			set_i = isl_set_subtract(set_i, zero);
		else
			set_i = isl_set_intersect(set_i, zero);
		set = isl_set_union_disjoint(set, set_i);
	}

	isl_pw_aff_free(pwaff);

	return set;
}

/* Return a set containing those elements in the domain
 * of pwaff where it is zero.
 */
__isl_give isl_set *isl_pw_aff_zero_set(__isl_take isl_pw_aff *pwaff)
{
	return pw_aff_zero_set(pwaff, 0);
}

/* Return a set containing those elements in the domain
 * of pwaff where it is not zero.
 */
__isl_give isl_set *isl_pw_aff_non_zero_set(__isl_take isl_pw_aff *pwaff)
{
	return pw_aff_zero_set(pwaff, 1);
}

/* Return a set containing those elements in the shared domain
 * of pwaff1 and pwaff2 where pwaff1 is greater than (or equal) to pwaff2.
 *
 * We compute the difference on the shared domain and then construct
 * the set of values where this difference is non-negative.
 * If strict is set, we first subtract 1 from the difference.
 * If equal is set, we only return the elements where pwaff1 and pwaff2
 * are equal.
 */
static __isl_give isl_set *pw_aff_gte_set(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2, int strict, int equal)
{
	isl_set *set1, *set2;

	set1 = isl_pw_aff_domain(isl_pw_aff_copy(pwaff1));
	set2 = isl_pw_aff_domain(isl_pw_aff_copy(pwaff2));
	set1 = isl_set_intersect(set1, set2);
	pwaff1 = isl_pw_aff_intersect_domain(pwaff1, isl_set_copy(set1));
	pwaff2 = isl_pw_aff_intersect_domain(pwaff2, isl_set_copy(set1));
	pwaff1 = isl_pw_aff_add(pwaff1, isl_pw_aff_neg(pwaff2));

	if (strict) {
		isl_space *dim = isl_set_get_space(set1);
		isl_aff *aff;
		aff = isl_aff_zero_on_domain(isl_local_space_from_space(dim));
		aff = isl_aff_add_constant_si(aff, -1);
		pwaff1 = isl_pw_aff_add(pwaff1, isl_pw_aff_alloc(set1, aff));
	} else
		isl_set_free(set1);

	if (equal)
		return isl_pw_aff_zero_set(pwaff1);
	return isl_pw_aff_nonneg_set(pwaff1);
}

/* Return a set containing those elements in the shared domain
 * of pwaff1 and pwaff2 where pwaff1 is equal to pwaff2.
 */
static __isl_give isl_set *pw_aff_eq_set(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return pw_aff_gte_set(pwaff1, pwaff2, 0, 1);
}

__isl_give isl_set *isl_pw_aff_eq_set(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return align_params_pw_pw_set_and(pwaff1, pwaff2, &pw_aff_eq_set);
}

/* Return a set containing those elements in the shared domain
 * of pwaff1 and pwaff2 where pwaff1 is greater than or equal to pwaff2.
 */
static __isl_give isl_set *pw_aff_ge_set(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return pw_aff_gte_set(pwaff1, pwaff2, 0, 0);
}

__isl_give isl_set *isl_pw_aff_ge_set(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return align_params_pw_pw_set_and(pwaff1, pwaff2, &pw_aff_ge_set);
}

/* Return a set containing those elements in the shared domain
 * of pwaff1 and pwaff2 where pwaff1 is strictly greater than pwaff2.
 */
static __isl_give isl_set *pw_aff_gt_set(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return pw_aff_gte_set(pwaff1, pwaff2, 1, 0);
}

__isl_give isl_set *isl_pw_aff_gt_set(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return align_params_pw_pw_set_and(pwaff1, pwaff2, &pw_aff_gt_set);
}

__isl_give isl_set *isl_pw_aff_le_set(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return isl_pw_aff_ge_set(pwaff2, pwaff1);
}

__isl_give isl_set *isl_pw_aff_lt_set(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return isl_pw_aff_gt_set(pwaff2, pwaff1);
}

/* Return a set containing those elements in the shared domain
 * of the elements of list1 and list2 where each element in list1
 * has the relation specified by "fn" with each element in list2.
 */
static __isl_give isl_set *pw_aff_list_set(__isl_take isl_pw_aff_list *list1,
	__isl_take isl_pw_aff_list *list2,
	__isl_give isl_set *(*fn)(__isl_take isl_pw_aff *pwaff1,
				    __isl_take isl_pw_aff *pwaff2))
{
	int i, j;
	isl_ctx *ctx;
	isl_set *set;

	if (!list1 || !list2)
		goto error;

	ctx = isl_pw_aff_list_get_ctx(list1);
	if (list1->n < 1 || list2->n < 1)
		isl_die(ctx, isl_error_invalid,
			"list should contain at least one element", goto error);

	set = isl_set_universe(isl_pw_aff_get_domain_space(list1->p[0]));
	for (i = 0; i < list1->n; ++i)
		for (j = 0; j < list2->n; ++j) {
			isl_set *set_ij;

			set_ij = fn(isl_pw_aff_copy(list1->p[i]),
				    isl_pw_aff_copy(list2->p[j]));
			set = isl_set_intersect(set, set_ij);
		}

	isl_pw_aff_list_free(list1);
	isl_pw_aff_list_free(list2);
	return set;
error:
	isl_pw_aff_list_free(list1);
	isl_pw_aff_list_free(list2);
	return NULL;
}

/* Return a set containing those elements in the shared domain
 * of the elements of list1 and list2 where each element in list1
 * is equal to each element in list2.
 */
__isl_give isl_set *isl_pw_aff_list_eq_set(__isl_take isl_pw_aff_list *list1,
	__isl_take isl_pw_aff_list *list2)
{
	return pw_aff_list_set(list1, list2, &isl_pw_aff_eq_set);
}

__isl_give isl_set *isl_pw_aff_list_ne_set(__isl_take isl_pw_aff_list *list1,
	__isl_take isl_pw_aff_list *list2)
{
	return pw_aff_list_set(list1, list2, &isl_pw_aff_ne_set);
}

/* Return a set containing those elements in the shared domain
 * of the elements of list1 and list2 where each element in list1
 * is less than or equal to each element in list2.
 */
__isl_give isl_set *isl_pw_aff_list_le_set(__isl_take isl_pw_aff_list *list1,
	__isl_take isl_pw_aff_list *list2)
{
	return pw_aff_list_set(list1, list2, &isl_pw_aff_le_set);
}

__isl_give isl_set *isl_pw_aff_list_lt_set(__isl_take isl_pw_aff_list *list1,
	__isl_take isl_pw_aff_list *list2)
{
	return pw_aff_list_set(list1, list2, &isl_pw_aff_lt_set);
}

__isl_give isl_set *isl_pw_aff_list_ge_set(__isl_take isl_pw_aff_list *list1,
	__isl_take isl_pw_aff_list *list2)
{
	return pw_aff_list_set(list1, list2, &isl_pw_aff_ge_set);
}

__isl_give isl_set *isl_pw_aff_list_gt_set(__isl_take isl_pw_aff_list *list1,
	__isl_take isl_pw_aff_list *list2)
{
	return pw_aff_list_set(list1, list2, &isl_pw_aff_gt_set);
}


/* Return a set containing those elements in the shared domain
 * of pwaff1 and pwaff2 where pwaff1 is not equal to pwaff2.
 */
static __isl_give isl_set *pw_aff_ne_set(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	isl_set *set_lt, *set_gt;

	set_lt = isl_pw_aff_lt_set(isl_pw_aff_copy(pwaff1),
				   isl_pw_aff_copy(pwaff2));
	set_gt = isl_pw_aff_gt_set(pwaff1, pwaff2);
	return isl_set_union_disjoint(set_lt, set_gt);
}

__isl_give isl_set *isl_pw_aff_ne_set(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return align_params_pw_pw_set_and(pwaff1, pwaff2, &pw_aff_ne_set);
}

__isl_give isl_pw_aff *isl_pw_aff_scale_down(__isl_take isl_pw_aff *pwaff,
	isl_int v)
{
	int i;

	if (isl_int_is_one(v))
		return pwaff;
	if (!isl_int_is_pos(v))
		isl_die(isl_pw_aff_get_ctx(pwaff), isl_error_invalid,
			"factor needs to be positive",
			return isl_pw_aff_free(pwaff));
	pwaff = isl_pw_aff_cow(pwaff);
	if (!pwaff)
		return NULL;
	if (pwaff->n == 0)
		return pwaff;

	for (i = 0; i < pwaff->n; ++i) {
		pwaff->p[i].aff = isl_aff_scale_down(pwaff->p[i].aff, v);
		if (!pwaff->p[i].aff)
			return isl_pw_aff_free(pwaff);
	}

	return pwaff;
}

/* Divide "pa" by "f".
 */
__isl_give isl_pw_aff *isl_pw_aff_scale_down_val(__isl_take isl_pw_aff *pa,
	__isl_take isl_val *f)
{
	int i;

	if (!pa || !f)
		goto error;

	if (isl_val_is_one(f)) {
		isl_val_free(f);
		return pa;
	}

	if (!isl_val_is_rat(f))
		isl_die(isl_pw_aff_get_ctx(pa), isl_error_invalid,
			"expecting rational factor", goto error);
	if (!isl_val_is_pos(f))
		isl_die(isl_pw_aff_get_ctx(pa), isl_error_invalid,
			"factor needs to be positive", goto error);

	pa = isl_pw_aff_cow(pa);
	if (!pa)
		return NULL;
	if (pa->n == 0)
		return pa;

	for (i = 0; i < pa->n; ++i) {
		pa->p[i].aff = isl_aff_scale_down_val(pa->p[i].aff,
							isl_val_copy(f));
		if (!pa->p[i].aff)
			goto error;
	}

	isl_val_free(f);
	return pa;
error:
	isl_pw_aff_free(pa);
	isl_val_free(f);
	return NULL;
}

__isl_give isl_pw_aff *isl_pw_aff_floor(__isl_take isl_pw_aff *pwaff)
{
	int i;

	pwaff = isl_pw_aff_cow(pwaff);
	if (!pwaff)
		return NULL;
	if (pwaff->n == 0)
		return pwaff;

	for (i = 0; i < pwaff->n; ++i) {
		pwaff->p[i].aff = isl_aff_floor(pwaff->p[i].aff);
		if (!pwaff->p[i].aff)
			return isl_pw_aff_free(pwaff);
	}

	return pwaff;
}

__isl_give isl_pw_aff *isl_pw_aff_ceil(__isl_take isl_pw_aff *pwaff)
{
	int i;

	pwaff = isl_pw_aff_cow(pwaff);
	if (!pwaff)
		return NULL;
	if (pwaff->n == 0)
		return pwaff;

	for (i = 0; i < pwaff->n; ++i) {
		pwaff->p[i].aff = isl_aff_ceil(pwaff->p[i].aff);
		if (!pwaff->p[i].aff)
			return isl_pw_aff_free(pwaff);
	}

	return pwaff;
}

/* Assuming that "cond1" and "cond2" are disjoint,
 * return an affine expression that is equal to pwaff1 on cond1
 * and to pwaff2 on cond2.
 */
static __isl_give isl_pw_aff *isl_pw_aff_select(
	__isl_take isl_set *cond1, __isl_take isl_pw_aff *pwaff1,
	__isl_take isl_set *cond2, __isl_take isl_pw_aff *pwaff2)
{
	pwaff1 = isl_pw_aff_intersect_domain(pwaff1, cond1);
	pwaff2 = isl_pw_aff_intersect_domain(pwaff2, cond2);

	return isl_pw_aff_add_disjoint(pwaff1, pwaff2);
}

/* Return an affine expression that is equal to pwaff_true for elements
 * where "cond" is non-zero and to pwaff_false for elements where "cond"
 * is zero.
 * That is, return cond ? pwaff_true : pwaff_false;
 */
__isl_give isl_pw_aff *isl_pw_aff_cond(__isl_take isl_pw_aff *cond,
	__isl_take isl_pw_aff *pwaff_true, __isl_take isl_pw_aff *pwaff_false)
{
	isl_set *cond_true, *cond_false;

	cond_true = isl_pw_aff_non_zero_set(isl_pw_aff_copy(cond));
	cond_false = isl_pw_aff_zero_set(cond);
	return isl_pw_aff_select(cond_true, pwaff_true,
				 cond_false, pwaff_false);
}

int isl_aff_is_cst(__isl_keep isl_aff *aff)
{
	if (!aff)
		return -1;

	return isl_seq_first_non_zero(aff->v->el + 2, aff->v->size - 2) == -1;
}

/* Check whether pwaff is a piecewise constant.
 */
int isl_pw_aff_is_cst(__isl_keep isl_pw_aff *pwaff)
{
	int i;

	if (!pwaff)
		return -1;

	for (i = 0; i < pwaff->n; ++i) {
		int is_cst = isl_aff_is_cst(pwaff->p[i].aff);
		if (is_cst < 0 || !is_cst)
			return is_cst;
	}

	return 1;
}

__isl_give isl_aff *isl_aff_mul(__isl_take isl_aff *aff1,
	__isl_take isl_aff *aff2)
{
	if (!isl_aff_is_cst(aff2) && isl_aff_is_cst(aff1))
		return isl_aff_mul(aff2, aff1);

	if (!isl_aff_is_cst(aff2))
		isl_die(isl_aff_get_ctx(aff1), isl_error_invalid,
			"at least one affine expression should be constant",
			goto error);

	aff1 = isl_aff_cow(aff1);
	if (!aff1 || !aff2)
		goto error;

	aff1 = isl_aff_scale(aff1, aff2->v->el[1]);
	aff1 = isl_aff_scale_down(aff1, aff2->v->el[0]);

	isl_aff_free(aff2);
	return aff1;
error:
	isl_aff_free(aff1);
	isl_aff_free(aff2);
	return NULL;
}

/* Divide "aff1" by "aff2", assuming "aff2" is a piecewise constant.
 */
__isl_give isl_aff *isl_aff_div(__isl_take isl_aff *aff1,
	__isl_take isl_aff *aff2)
{
	int is_cst;
	int neg;

	is_cst = isl_aff_is_cst(aff2);
	if (is_cst < 0)
		goto error;
	if (!is_cst)
		isl_die(isl_aff_get_ctx(aff2), isl_error_invalid,
			"second argument should be a constant", goto error);

	if (!aff2)
		goto error;

	neg = isl_int_is_neg(aff2->v->el[1]);
	if (neg) {
		isl_int_neg(aff2->v->el[0], aff2->v->el[0]);
		isl_int_neg(aff2->v->el[1], aff2->v->el[1]);
	}

	aff1 = isl_aff_scale(aff1, aff2->v->el[0]);
	aff1 = isl_aff_scale_down(aff1, aff2->v->el[1]);

	if (neg) {
		isl_int_neg(aff2->v->el[0], aff2->v->el[0]);
		isl_int_neg(aff2->v->el[1], aff2->v->el[1]);
	}

	isl_aff_free(aff2);
	return aff1;
error:
	isl_aff_free(aff1);
	isl_aff_free(aff2);
	return NULL;
}

static __isl_give isl_pw_aff *pw_aff_add(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return isl_pw_aff_on_shared_domain(pwaff1, pwaff2, &isl_aff_add);
}

__isl_give isl_pw_aff *isl_pw_aff_add(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return isl_pw_aff_align_params_pw_pw_and(pwaff1, pwaff2, &pw_aff_add);
}

__isl_give isl_pw_aff *isl_pw_aff_union_add(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return isl_pw_aff_union_add_(pwaff1, pwaff2);
}

static __isl_give isl_pw_aff *pw_aff_mul(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return isl_pw_aff_on_shared_domain(pwaff1, pwaff2, &isl_aff_mul);
}

__isl_give isl_pw_aff *isl_pw_aff_mul(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return isl_pw_aff_align_params_pw_pw_and(pwaff1, pwaff2, &pw_aff_mul);
}

static __isl_give isl_pw_aff *pw_aff_div(__isl_take isl_pw_aff *pa1,
	__isl_take isl_pw_aff *pa2)
{
	return isl_pw_aff_on_shared_domain(pa1, pa2, &isl_aff_div);
}

/* Divide "pa1" by "pa2", assuming "pa2" is a piecewise constant.
 */
__isl_give isl_pw_aff *isl_pw_aff_div(__isl_take isl_pw_aff *pa1,
	__isl_take isl_pw_aff *pa2)
{
	int is_cst;

	is_cst = isl_pw_aff_is_cst(pa2);
	if (is_cst < 0)
		goto error;
	if (!is_cst)
		isl_die(isl_pw_aff_get_ctx(pa2), isl_error_invalid,
			"second argument should be a piecewise constant",
			goto error);
	return isl_pw_aff_align_params_pw_pw_and(pa1, pa2, &pw_aff_div);
error:
	isl_pw_aff_free(pa1);
	isl_pw_aff_free(pa2);
	return NULL;
}

/* Compute the quotient of the integer division of "pa1" by "pa2"
 * with rounding towards zero.
 * "pa2" is assumed to be a piecewise constant.
 *
 * In particular, return
 *
 *	pa1 >= 0 ? floor(pa1/pa2) : ceil(pa1/pa2)
 *
 */
__isl_give isl_pw_aff *isl_pw_aff_tdiv_q(__isl_take isl_pw_aff *pa1,
	__isl_take isl_pw_aff *pa2)
{
	int is_cst;
	isl_set *cond;
	isl_pw_aff *f, *c;

	is_cst = isl_pw_aff_is_cst(pa2);
	if (is_cst < 0)
		goto error;
	if (!is_cst)
		isl_die(isl_pw_aff_get_ctx(pa2), isl_error_invalid,
			"second argument should be a piecewise constant",
			goto error);

	pa1 = isl_pw_aff_div(pa1, pa2);

	cond = isl_pw_aff_nonneg_set(isl_pw_aff_copy(pa1));
	f = isl_pw_aff_floor(isl_pw_aff_copy(pa1));
	c = isl_pw_aff_ceil(pa1);
	return isl_pw_aff_cond(isl_set_indicator_function(cond), f, c);
error:
	isl_pw_aff_free(pa1);
	isl_pw_aff_free(pa2);
	return NULL;
}

/* Compute the remainder of the integer division of "pa1" by "pa2"
 * with rounding towards zero.
 * "pa2" is assumed to be a piecewise constant.
 *
 * In particular, return
 *
 *	pa1 - pa2 * (pa1 >= 0 ? floor(pa1/pa2) : ceil(pa1/pa2))
 *
 */
__isl_give isl_pw_aff *isl_pw_aff_tdiv_r(__isl_take isl_pw_aff *pa1,
	__isl_take isl_pw_aff *pa2)
{
	int is_cst;
	isl_pw_aff *res;

	is_cst = isl_pw_aff_is_cst(pa2);
	if (is_cst < 0)
		goto error;
	if (!is_cst)
		isl_die(isl_pw_aff_get_ctx(pa2), isl_error_invalid,
			"second argument should be a piecewise constant",
			goto error);
	res = isl_pw_aff_tdiv_q(isl_pw_aff_copy(pa1), isl_pw_aff_copy(pa2));
	res = isl_pw_aff_mul(pa2, res);
	res = isl_pw_aff_sub(pa1, res);
	return res;
error:
	isl_pw_aff_free(pa1);
	isl_pw_aff_free(pa2);
	return NULL;
}

static __isl_give isl_pw_aff *pw_aff_min(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	isl_set *le;
	isl_set *dom;

	dom = isl_set_intersect(isl_pw_aff_domain(isl_pw_aff_copy(pwaff1)),
				isl_pw_aff_domain(isl_pw_aff_copy(pwaff2)));
	le = isl_pw_aff_le_set(isl_pw_aff_copy(pwaff1),
				isl_pw_aff_copy(pwaff2));
	dom = isl_set_subtract(dom, isl_set_copy(le));
	return isl_pw_aff_select(le, pwaff1, dom, pwaff2);
}

__isl_give isl_pw_aff *isl_pw_aff_min(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return isl_pw_aff_align_params_pw_pw_and(pwaff1, pwaff2, &pw_aff_min);
}

static __isl_give isl_pw_aff *pw_aff_max(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	isl_set *ge;
	isl_set *dom;

	dom = isl_set_intersect(isl_pw_aff_domain(isl_pw_aff_copy(pwaff1)),
				isl_pw_aff_domain(isl_pw_aff_copy(pwaff2)));
	ge = isl_pw_aff_ge_set(isl_pw_aff_copy(pwaff1),
				isl_pw_aff_copy(pwaff2));
	dom = isl_set_subtract(dom, isl_set_copy(ge));
	return isl_pw_aff_select(ge, pwaff1, dom, pwaff2);
}

__isl_give isl_pw_aff *isl_pw_aff_max(__isl_take isl_pw_aff *pwaff1,
	__isl_take isl_pw_aff *pwaff2)
{
	return isl_pw_aff_align_params_pw_pw_and(pwaff1, pwaff2, &pw_aff_max);
}

static __isl_give isl_pw_aff *pw_aff_list_reduce(
	__isl_take isl_pw_aff_list *list,
	__isl_give isl_pw_aff *(*fn)(__isl_take isl_pw_aff *pwaff1,
					__isl_take isl_pw_aff *pwaff2))
{
	int i;
	isl_ctx *ctx;
	isl_pw_aff *res;

	if (!list)
		return NULL;

	ctx = isl_pw_aff_list_get_ctx(list);
	if (list->n < 1)
		isl_die(ctx, isl_error_invalid,
			"list should contain at least one element",
			return isl_pw_aff_list_free(list));

	res = isl_pw_aff_copy(list->p[0]);
	for (i = 1; i < list->n; ++i)
		res = fn(res, isl_pw_aff_copy(list->p[i]));

	isl_pw_aff_list_free(list);
	return res;
}

/* Return an isl_pw_aff that maps each element in the intersection of the
 * domains of the elements of list to the minimal corresponding affine
 * expression.
 */
__isl_give isl_pw_aff *isl_pw_aff_list_min(__isl_take isl_pw_aff_list *list)
{
	return pw_aff_list_reduce(list, &isl_pw_aff_min);
}

/* Return an isl_pw_aff that maps each element in the intersection of the
 * domains of the elements of list to the maximal corresponding affine
 * expression.
 */
__isl_give isl_pw_aff *isl_pw_aff_list_max(__isl_take isl_pw_aff_list *list)
{
	return pw_aff_list_reduce(list, &isl_pw_aff_max);
}

/* Mark the domains of "pwaff" as rational.
 */
__isl_give isl_pw_aff *isl_pw_aff_set_rational(__isl_take isl_pw_aff *pwaff)
{
	int i;

	pwaff = isl_pw_aff_cow(pwaff);
	if (!pwaff)
		return NULL;
	if (pwaff->n == 0)
		return pwaff;

	for (i = 0; i < pwaff->n; ++i) {
		pwaff->p[i].set = isl_set_set_rational(pwaff->p[i].set);
		if (!pwaff->p[i].set)
			return isl_pw_aff_free(pwaff);
	}

	return pwaff;
}

/* Mark the domains of the elements of "list" as rational.
 */
__isl_give isl_pw_aff_list *isl_pw_aff_list_set_rational(
	__isl_take isl_pw_aff_list *list)
{
	int i, n;

	if (!list)
		return NULL;
	if (list->n == 0)
		return list;

	n = list->n;
	for (i = 0; i < n; ++i) {
		isl_pw_aff *pa;

		pa = isl_pw_aff_list_get_pw_aff(list, i);
		pa = isl_pw_aff_set_rational(pa);
		list = isl_pw_aff_list_set_pw_aff(list, i, pa);
	}

	return list;
}

/* Check that the domain space of "aff" matches "space".
 *
 * Return 0 on success and -1 on error.
 */
int isl_aff_check_match_domain_space(__isl_keep isl_aff *aff,
	__isl_keep isl_space *space)
{
	isl_space *aff_space;
	int match;

	if (!aff || !space)
		return -1;

	aff_space = isl_aff_get_domain_space(aff);

	match = isl_space_match(space, isl_dim_param, aff_space, isl_dim_param);
	if (match < 0)
		goto error;
	if (!match)
		isl_die(isl_aff_get_ctx(aff), isl_error_invalid,
			"parameters don't match", goto error);
	match = isl_space_tuple_match(space, isl_dim_in,
					aff_space, isl_dim_set);
	if (match < 0)
		goto error;
	if (!match)
		isl_die(isl_aff_get_ctx(aff), isl_error_invalid,
			"domains don't match", goto error);
	isl_space_free(aff_space);
	return 0;
error:
	isl_space_free(aff_space);
	return -1;
}

#undef BASE
#define BASE aff

#include <isl_multi_templ.c>

/* Create an isl_pw_multi_aff with the given isl_multi_aff on a universe
 * domain.
 */
__isl_give isl_pw_multi_aff *isl_pw_multi_aff_from_multi_aff(
	__isl_take isl_multi_aff *ma)
{
	isl_set *dom = isl_set_universe(isl_multi_aff_get_domain_space(ma));
	return isl_pw_multi_aff_alloc(dom, ma);
}

/* Create a piecewise multi-affine expression in the given space that maps each
 * input dimension to the corresponding output dimension.
 */
__isl_give isl_pw_multi_aff *isl_pw_multi_aff_identity(
	__isl_take isl_space *space)
{
	return isl_pw_multi_aff_from_multi_aff(isl_multi_aff_identity(space));
}

__isl_give isl_multi_aff *isl_multi_aff_add(__isl_take isl_multi_aff *maff1,
	__isl_take isl_multi_aff *maff2)
{
	return isl_multi_aff_bin_op(maff1, maff2, &isl_aff_add);
}

/* Subtract "ma2" from "ma1" and return the result.
 */
__isl_give isl_multi_aff *isl_multi_aff_sub(__isl_take isl_multi_aff *ma1,
	__isl_take isl_multi_aff *ma2)
{
	return isl_multi_aff_bin_op(ma1, ma2, &isl_aff_sub);
}

/* Given two multi-affine expressions A -> B and C -> D,
 * construct a multi-affine expression [A -> C] -> [B -> D].
 */
__isl_give isl_multi_aff *isl_multi_aff_product(
	__isl_take isl_multi_aff *ma1, __isl_take isl_multi_aff *ma2)
{
	int i;
	isl_aff *aff;
	isl_space *space;
	isl_multi_aff *res;
	int in1, in2, out1, out2;

	in1 = isl_multi_aff_dim(ma1, isl_dim_in);
	in2 = isl_multi_aff_dim(ma2, isl_dim_in);
	out1 = isl_multi_aff_dim(ma1, isl_dim_out);
	out2 = isl_multi_aff_dim(ma2, isl_dim_out);
	space = isl_space_product(isl_multi_aff_get_space(ma1),
				  isl_multi_aff_get_space(ma2));
	res = isl_multi_aff_alloc(isl_space_copy(space));
	space = isl_space_domain(space);

	for (i = 0; i < out1; ++i) {
		aff = isl_multi_aff_get_aff(ma1, i);
		aff = isl_aff_insert_dims(aff, isl_dim_in, in1, in2);
		aff = isl_aff_reset_domain_space(aff, isl_space_copy(space));
		res = isl_multi_aff_set_aff(res, i, aff);
	}

	for (i = 0; i < out2; ++i) {
		aff = isl_multi_aff_get_aff(ma2, i);
		aff = isl_aff_insert_dims(aff, isl_dim_in, 0, in1);
		aff = isl_aff_reset_domain_space(aff, isl_space_copy(space));
		res = isl_multi_aff_set_aff(res, out1 + i, aff);
	}

	isl_space_free(space);
	isl_multi_aff_free(ma1);
	isl_multi_aff_free(ma2);
	return res;
}

/* Exploit the equalities in "eq" to simplify the affine expressions.
 */
static __isl_give isl_multi_aff *isl_multi_aff_substitute_equalities(
	__isl_take isl_multi_aff *maff, __isl_take isl_basic_set *eq)
{
	int i;

	maff = isl_multi_aff_cow(maff);
	if (!maff || !eq)
		goto error;

	for (i = 0; i < maff->n; ++i) {
		maff->p[i] = isl_aff_substitute_equalities(maff->p[i],
						    isl_basic_set_copy(eq));
		if (!maff->p[i])
			goto error;
	}

	isl_basic_set_free(eq);
	return maff;
error:
	isl_basic_set_free(eq);
	isl_multi_aff_free(maff);
	return NULL;
}

__isl_give isl_multi_aff *isl_multi_aff_scale(__isl_take isl_multi_aff *maff,
	isl_int f)
{
	int i;

	maff = isl_multi_aff_cow(maff);
	if (!maff)
		return NULL;

	for (i = 0; i < maff->n; ++i) {
		maff->p[i] = isl_aff_scale(maff->p[i], f);
		if (!maff->p[i])
			return isl_multi_aff_free(maff);
	}

	return maff;
}

__isl_give isl_multi_aff *isl_multi_aff_add_on_domain(__isl_keep isl_set *dom,
	__isl_take isl_multi_aff *maff1, __isl_take isl_multi_aff *maff2)
{
	maff1 = isl_multi_aff_add(maff1, maff2);
	maff1 = isl_multi_aff_gist(maff1, isl_set_copy(dom));
	return maff1;
}

int isl_multi_aff_is_empty(__isl_keep isl_multi_aff *maff)
{
	if (!maff)
		return -1;

	return 0;
}

int isl_multi_aff_plain_is_equal(__isl_keep isl_multi_aff *maff1,
	__isl_keep isl_multi_aff *maff2)
{
	int i;
	int equal;

	if (!maff1 || !maff2)
		return -1;
	if (maff1->n != maff2->n)
		return 0;
	equal = isl_space_is_equal(maff1->space, maff2->space);
	if (equal < 0 || !equal)
		return equal;

	for (i = 0; i < maff1->n; ++i) {
		equal = isl_aff_plain_is_equal(maff1->p[i], maff2->p[i]);
		if (equal < 0 || !equal)
			return equal;
	}

	return 1;
}

/* Return the set of domain elements where "ma1" is lexicographically
 * smaller than or equal to "ma2".
 */
__isl_give isl_set *isl_multi_aff_lex_le_set(__isl_take isl_multi_aff *ma1,
	__isl_take isl_multi_aff *ma2)
{
	return isl_multi_aff_lex_ge_set(ma2, ma1);
}

/* Return the set of domain elements where "ma1" is lexicographically
 * greater than or equal to "ma2".
 */
__isl_give isl_set *isl_multi_aff_lex_ge_set(__isl_take isl_multi_aff *ma1,
	__isl_take isl_multi_aff *ma2)
{
	isl_space *space;
	isl_map *map1, *map2;
	isl_map *map, *ge;

	map1 = isl_map_from_multi_aff(ma1);
	map2 = isl_map_from_multi_aff(ma2);
	map = isl_map_range_product(map1, map2);
	space = isl_space_range(isl_map_get_space(map));
	space = isl_space_domain(isl_space_unwrap(space));
	ge = isl_map_lex_ge(space);
	map = isl_map_intersect_range(map, isl_map_wrap(ge));

	return isl_map_domain(map);
}

#undef PW
#define PW isl_pw_multi_aff
#undef EL
#define EL isl_multi_aff
#undef EL_IS_ZERO
#define EL_IS_ZERO is_empty
#undef ZERO
#define ZERO empty
#undef IS_ZERO
#define IS_ZERO is_empty
#undef FIELD
#define FIELD maff
#undef DEFAULT_IS_ZERO
#define DEFAULT_IS_ZERO 0

#define NO_NEG
#define NO_EVAL
#define NO_OPT
#define NO_INVOLVES_DIMS
#define NO_MOVE_DIMS
#define NO_INSERT_DIMS
#define NO_LIFT
#define NO_MORPH

#include <isl_pw_templ.c>

#undef UNION
#define UNION isl_union_pw_multi_aff
#undef PART
#define PART isl_pw_multi_aff
#undef PARTS
#define PARTS pw_multi_aff
#define ALIGN_DOMAIN

#define NO_EVAL

#include <isl_union_templ.c>

/* Given a function "cmp" that returns the set of elements where
 * "ma1" is "better" than "ma2", return the intersection of this
 * set with "dom1" and "dom2".
 */
static __isl_give isl_set *shared_and_better(__isl_keep isl_set *dom1,
	__isl_keep isl_set *dom2, __isl_keep isl_multi_aff *ma1,
	__isl_keep isl_multi_aff *ma2,
	__isl_give isl_set *(*cmp)(__isl_take isl_multi_aff *ma1,
				    __isl_take isl_multi_aff *ma2))
{
	isl_set *common;
	isl_set *better;
	int is_empty;

	common = isl_set_intersect(isl_set_copy(dom1), isl_set_copy(dom2));
	is_empty = isl_set_plain_is_empty(common);
	if (is_empty >= 0 && is_empty)
		return common;
	if (is_empty < 0)
		return isl_set_free(common);
	better = cmp(isl_multi_aff_copy(ma1), isl_multi_aff_copy(ma2));
	better = isl_set_intersect(common, better);

	return better;
}

/* Given a function "cmp" that returns the set of elements where
 * "ma1" is "better" than "ma2", return a piecewise multi affine
 * expression defined on the union of the definition domains
 * of "pma1" and "pma2" that maps to the "best" of "pma1" and
 * "pma2" on each cell.  If only one of the two input functions
 * is defined on a given cell, then it is considered the best.
 */
static __isl_give isl_pw_multi_aff *pw_multi_aff_union_opt(
	__isl_take isl_pw_multi_aff *pma1,
	__isl_take isl_pw_multi_aff *pma2,
	__isl_give isl_set *(*cmp)(__isl_take isl_multi_aff *ma1,
				    __isl_take isl_multi_aff *ma2))
{
	int i, j, n;
	isl_pw_multi_aff *res = NULL;
	isl_ctx *ctx;
	isl_set *set = NULL;

	if (!pma1 || !pma2)
		goto error;

	ctx = isl_space_get_ctx(pma1->dim);
	if (!isl_space_is_equal(pma1->dim, pma2->dim))
		isl_die(ctx, isl_error_invalid,
			"arguments should live in the same space", goto error);

	if (isl_pw_multi_aff_is_empty(pma1)) {
		isl_pw_multi_aff_free(pma1);
		return pma2;
	}

	if (isl_pw_multi_aff_is_empty(pma2)) {
		isl_pw_multi_aff_free(pma2);
		return pma1;
	}

	n = 2 * (pma1->n + 1) * (pma2->n + 1);
	res = isl_pw_multi_aff_alloc_size(isl_space_copy(pma1->dim), n);

	for (i = 0; i < pma1->n; ++i) {
		set = isl_set_copy(pma1->p[i].set);
		for (j = 0; j < pma2->n; ++j) {
			isl_set *better;
			int is_empty;

			better = shared_and_better(pma2->p[j].set,
					pma1->p[i].set, pma2->p[j].maff,
					pma1->p[i].maff, cmp);
			is_empty = isl_set_plain_is_empty(better);
			if (is_empty < 0 || is_empty) {
				isl_set_free(better);
				if (is_empty < 0)
					goto error;
				continue;
			}
			set = isl_set_subtract(set, isl_set_copy(better));

			res = isl_pw_multi_aff_add_piece(res, better,
					isl_multi_aff_copy(pma2->p[j].maff));
		}
		res = isl_pw_multi_aff_add_piece(res, set,
					isl_multi_aff_copy(pma1->p[i].maff));
	}

	for (j = 0; j < pma2->n; ++j) {
		set = isl_set_copy(pma2->p[j].set);
		for (i = 0; i < pma1->n; ++i)
			set = isl_set_subtract(set,
					isl_set_copy(pma1->p[i].set));
		res = isl_pw_multi_aff_add_piece(res, set,
					isl_multi_aff_copy(pma2->p[j].maff));
	}

	isl_pw_multi_aff_free(pma1);
	isl_pw_multi_aff_free(pma2);

	return res;
error:
	isl_pw_multi_aff_free(pma1);
	isl_pw_multi_aff_free(pma2);
	isl_set_free(set);
	return isl_pw_multi_aff_free(res);
}

static __isl_give isl_pw_multi_aff *pw_multi_aff_union_lexmax(
	__isl_take isl_pw_multi_aff *pma1,
	__isl_take isl_pw_multi_aff *pma2)
{
	return pw_multi_aff_union_opt(pma1, pma2, &isl_multi_aff_lex_ge_set);
}

/* Given two piecewise multi affine expressions, return a piecewise
 * multi-affine expression defined on the union of the definition domains
 * of the inputs that is equal to the lexicographic maximum of the two
 * inputs on each cell.  If only one of the two inputs is defined on
 * a given cell, then it is considered to be the maximum.
 */
__isl_give isl_pw_multi_aff *isl_pw_multi_aff_union_lexmax(
	__isl_take isl_pw_multi_aff *pma1,
	__isl_take isl_pw_multi_aff *pma2)
{
	return isl_pw_multi_aff_align_params_pw_pw_and(pma1, pma2,
						    &pw_multi_aff_union_lexmax);
}

static __isl_give isl_pw_multi_aff *pw_multi_aff_union_lexmin(
	__isl_take isl_pw_multi_aff *pma1,
	__isl_take isl_pw_multi_aff *pma2)
{
	return pw_multi_aff_union_opt(pma1, pma2, &isl_multi_aff_lex_le_set);
}

/* Given two piecewise multi affine expressions, return a piecewise
 * multi-affine expression defined on the union of the definition domains
 * of the inputs that is equal to the lexicographic minimum of the two
 * inputs on each cell.  If only one of the two inputs is defined on
 * a given cell, then it is considered to be the minimum.
 */
__isl_give isl_pw_multi_aff *isl_pw_multi_aff_union_lexmin(
	__isl_take isl_pw_multi_aff *pma1,
	__isl_take isl_pw_multi_aff *pma2)
{
	return isl_pw_multi_aff_align_params_pw_pw_and(pma1, pma2,
						    &pw_multi_aff_union_lexmin);
}

static __isl_give isl_pw_multi_aff *pw_multi_aff_add(
	__isl_take isl_pw_multi_aff *pma1, __isl_take isl_pw_multi_aff *pma2)
{
	return isl_pw_multi_aff_on_shared_domain(pma1, pma2,
						&isl_multi_aff_add);
}

__isl_give isl_pw_multi_aff *isl_pw_multi_aff_add(
	__isl_take isl_pw_multi_aff *pma1, __isl_take isl_pw_multi_aff *pma2)
{
	return isl_pw_multi_aff_align_params_pw_pw_and(pma1, pma2,
						&pw_multi_aff_add);
}

static __isl_give isl_pw_multi_aff *pw_multi_aff_sub(
	__isl_take isl_pw_multi_aff *pma1, __isl_take isl_pw_multi_aff *pma2)
{
	return isl_pw_multi_aff_on_shared_domain(pma1, pma2,
						&isl_multi_aff_sub);
}

/* Subtract "pma2" from "pma1" and return the result.
 */
__isl_give isl_pw_multi_aff *isl_pw_multi_aff_sub(
	__isl_take isl_pw_multi_aff *pma1, __isl_take isl_pw_multi_aff *pma2)
{
	return isl_pw_multi_aff_align_params_pw_pw_and(pma1, pma2,
						&pw_multi_aff_sub);
}

__isl_give isl_pw_multi_aff *isl_pw_multi_aff_union_add(
	__isl_take isl_pw_multi_aff *pma1, __isl_take isl_pw_multi_aff *pma2)
{
	return isl_pw_multi_aff_union_add_(pma1, pma2);
}

/* Given two piecewise multi-affine expressions A -> B and C -> D,
 * construct a piecewise multi-affine expression [A -> C] -> [B -> D].
 */
static __isl_give isl_pw_multi_aff *pw_multi_aff_product(
	__isl_take isl_pw_multi_aff *pma1, __isl_take isl_pw_multi_aff *pma2)
{
	int i, j, n;
	isl_space *space;
	isl_pw_multi_aff *res;

	if (!pma1 || !pma2)
		goto error;

	n = pma1->n * pma2->n;
	space = isl_space_product(isl_space_copy(pma1->dim),
				  isl_space_copy(pma2->dim));
	res = isl_pw_multi_aff_alloc_size(space, n);

	for (i = 0; i < pma1->n; ++i) {
		for (j = 0; j < pma2->n; ++j) {
			isl_set *domain;
			isl_multi_aff *ma;

			domain = isl_set_product(isl_set_copy(pma1->p[i].set),
						 isl_set_copy(pma2->p[j].set));
			ma = isl_multi_aff_product(
					isl_multi_aff_copy(pma1->p[i].maff),
					isl_multi_aff_copy(pma2->p[j].maff));
			res = isl_pw_multi_aff_add_piece(res, domain, ma);
		}
	}

	isl_pw_multi_aff_free(pma1);
	isl_pw_multi_aff_free(pma2);
	return res;
error:
	isl_pw_multi_aff_free(pma1);
	isl_pw_multi_aff_free(pma2);
	return NULL;
}

__isl_give isl_pw_multi_aff *isl_pw_multi_aff_product(
	__isl_take isl_pw_multi_aff *pma1, __isl_take isl_pw_multi_aff *pma2)
{
	return isl_pw_multi_aff_align_params_pw_pw_and(pma1, pma2,
						&pw_multi_aff_product);
}

/* Construct a map mapping the domain of the piecewise multi-affine expression
 * to its range, with each dimension in the range equated to the
 * corresponding affine expression on its cell.
 */
__isl_give isl_map *isl_map_from_pw_multi_aff(__isl_take isl_pw_multi_aff *pma)
{
	int i;
	isl_map *map;

	if (!pma)
		return NULL;

	map = isl_map_empty(isl_pw_multi_aff_get_space(pma));

	for (i = 0; i < pma->n; ++i) {
		isl_multi_aff *maff;
		isl_basic_map *bmap;
		isl_map *map_i;

		maff = isl_multi_aff_copy(pma->p[i].maff);
		bmap = isl_basic_map_from_multi_aff(maff);
		map_i = isl_map_from_basic_map(bmap);
		map_i = isl_map_intersect_domain(map_i,
						isl_set_copy(pma->p[i].set));
		map = isl_map_union_disjoint(map, map_i);
	}

	isl_pw_multi_aff_free(pma);
	return map;
}

__isl_give isl_set *isl_set_from_pw_multi_aff(__isl_take isl_pw_multi_aff *pma)
{
	if (!pma)
		return NULL;

	if (!isl_space_is_set(pma->dim))
		isl_die(isl_pw_multi_aff_get_ctx(pma), isl_error_invalid,
			"isl_pw_multi_aff cannot be converted into an isl_set",
			return isl_pw_multi_aff_free(pma));

	return isl_map_from_pw_multi_aff(pma);
}

/* Given a basic map with a single output dimension that is defined
 * in terms of the parameters and input dimensions using an equality,
 * extract an isl_aff that expresses the output dimension in terms
 * of the parameters and input dimensions.
 *
 * Since some applications expect the result of isl_pw_multi_aff_from_map
 * to only contain integer affine expressions, we compute the floor
 * of the expression before returning.
 *
 * This function shares some similarities with
 * isl_basic_map_has_defining_equality and isl_constraint_get_bound.
 */
static __isl_give isl_aff *extract_isl_aff_from_basic_map(
	__isl_take isl_basic_map *bmap)
{
	int i;
	unsigned offset;
	unsigned total;
	isl_local_space *ls;
	isl_aff *aff;

	if (!bmap)
		return NULL;
	if (isl_basic_map_dim(bmap, isl_dim_out) != 1)
		isl_die(isl_basic_map_get_ctx(bmap), isl_error_invalid,
			"basic map should have a single output dimension",
			goto error);
	offset = isl_basic_map_offset(bmap, isl_dim_out);
	total = isl_basic_map_total_dim(bmap);
	for (i = 0; i < bmap->n_eq; ++i) {
		if (isl_int_is_zero(bmap->eq[i][offset]))
			continue;
		if (isl_seq_first_non_zero(bmap->eq[i] + offset + 1,
					   1 + total - (offset + 1)) != -1)
			continue;
		break;
	}
	if (i >= bmap->n_eq)
		isl_die(isl_basic_map_get_ctx(bmap), isl_error_invalid,
			"unable to find suitable equality", goto error);
	ls = isl_basic_map_get_local_space(bmap);
	aff = isl_aff_alloc(isl_local_space_domain(ls));
	if (!aff)
		goto error;
	if (isl_int_is_neg(bmap->eq[i][offset]))
		isl_seq_cpy(aff->v->el + 1, bmap->eq[i], offset);
	else
		isl_seq_neg(aff->v->el + 1, bmap->eq[i], offset);
	isl_seq_clr(aff->v->el + 1 + offset, aff->v->size - (1 + offset));
	isl_int_abs(aff->v->el[0], bmap->eq[i][offset]);
	isl_basic_map_free(bmap);

	aff = isl_aff_remove_unused_divs(aff);
	aff = isl_aff_floor(aff);
	return aff;
error:
	isl_basic_map_free(bmap);
	return NULL;
}

/* Given a basic map where each output dimension is defined
 * in terms of the parameters and input dimensions using an equality,
 * extract an isl_multi_aff that expresses the output dimensions in terms
 * of the parameters and input dimensions.
 */
static __isl_give isl_multi_aff *extract_isl_multi_aff_from_basic_map(
	__isl_take isl_basic_map *bmap)
{
	int i;
	unsigned n_out;
	isl_multi_aff *ma;

	if (!bmap)
		return NULL;

	ma = isl_multi_aff_alloc(isl_basic_map_get_space(bmap));
	n_out = isl_basic_map_dim(bmap, isl_dim_out);

	for (i = 0; i < n_out; ++i) {
		isl_basic_map *bmap_i;
		isl_aff *aff;

		bmap_i = isl_basic_map_copy(bmap);
		bmap_i = isl_basic_map_project_out(bmap_i, isl_dim_out,
							i + 1, n_out - (1 + i));
		bmap_i = isl_basic_map_project_out(bmap_i, isl_dim_out, 0, i);
		aff = extract_isl_aff_from_basic_map(bmap_i);
		ma = isl_multi_aff_set_aff(ma, i, aff);
	}

	isl_basic_map_free(bmap);

	return ma;
}

/* Create an isl_pw_multi_aff that is equivalent to
 * isl_map_intersect_domain(isl_map_from_basic_map(bmap), domain).
 * The given basic map is such that each output dimension is defined
 * in terms of the parameters and input dimensions using an equality.
 */
static __isl_give isl_pw_multi_aff *plain_pw_multi_aff_from_map(
	__isl_take isl_set *domain, __isl_take isl_basic_map *bmap)
{
	isl_multi_aff *ma;

	ma = extract_isl_multi_aff_from_basic_map(bmap);
	return isl_pw_multi_aff_alloc(domain, ma);
}

/* Try and create an isl_pw_multi_aff that is equivalent to the given isl_map.
 * This obviously only works if the input "map" is single-valued.
 * If so, we compute the lexicographic minimum of the image in the form
 * of an isl_pw_multi_aff.  Since the image is unique, it is equal
 * to its lexicographic minimum.
 * If the input is not single-valued, we produce an error.
 */
static __isl_give isl_pw_multi_aff *pw_multi_aff_from_map_base(
	__isl_take isl_map *map)
{
	int i;
	int sv;
	isl_pw_multi_aff *pma;

	sv = isl_map_is_single_valued(map);
	if (sv < 0)
		goto error;
	if (!sv)
		isl_die(isl_map_get_ctx(map), isl_error_invalid,
			"map is not single-valued", goto error);
	map = isl_map_make_disjoint(map);
	if (!map)
		return NULL;

	pma = isl_pw_multi_aff_empty(isl_map_get_space(map));

	for (i = 0; i < map->n; ++i) {
		isl_pw_multi_aff *pma_i;
		isl_basic_map *bmap;
		bmap = isl_basic_map_copy(map->p[i]);
		pma_i = isl_basic_map_lexmin_pw_multi_aff(bmap);
		pma = isl_pw_multi_aff_add_disjoint(pma, pma_i);
	}

	isl_map_free(map);
	return pma;
error:
	isl_map_free(map);
	return NULL;
}

/* Try and create an isl_pw_multi_aff that is equivalent to the given isl_map,
 * taking into account that the output dimension at position "d"
 * can be represented as
 *
 *	x = floor((e(...) + c1) / m)
 *
 * given that constraint "i" is of the form
 *
 *	e(...) + c1 - m x >= 0
 *
 *
 * Let "map" be of the form
 *
 *	A -> B
 *
 * We construct a mapping
 *
 *	A -> [A -> x = floor(...)]
 *
 * apply that to the map, obtaining
 *
 *	[A -> x = floor(...)] -> B
 *
 * and equate dimension "d" to x.
 * We then compute a isl_pw_multi_aff representation of the resulting map
 * and plug in the mapping above.
 */
static __isl_give isl_pw_multi_aff *pw_multi_aff_from_map_div(
	__isl_take isl_map *map, __isl_take isl_basic_map *hull, int d, int i)
{
	isl_ctx *ctx;
	isl_space *space;
	isl_local_space *ls;
	isl_multi_aff *ma;
	isl_aff *aff;
	isl_vec *v;
	isl_map *insert;
	int offset;
	int n;
	int n_in;
	isl_pw_multi_aff *pma;
	int is_set;

	is_set = isl_map_is_set(map);

	offset = isl_basic_map_offset(hull, isl_dim_out);
	ctx = isl_map_get_ctx(map);
	space = isl_space_domain(isl_map_get_space(map));
	n_in = isl_space_dim(space, isl_dim_set);
	n = isl_space_dim(space, isl_dim_all);

	v = isl_vec_alloc(ctx, 1 + 1 + n);
	if (v) {
		isl_int_neg(v->el[0], hull->ineq[i][offset + d]);
		isl_seq_cpy(v->el + 1, hull->ineq[i], 1 + n);
	}
	isl_basic_map_free(hull);

	ls = isl_local_space_from_space(isl_space_copy(space));
	aff = isl_aff_alloc_vec(ls, v);
	aff = isl_aff_floor(aff);
	if (is_set) {
		isl_space_free(space);
		ma = isl_multi_aff_from_aff(aff);
	} else {
		ma = isl_multi_aff_identity(isl_space_map_from_set(space));
		ma = isl_multi_aff_range_product(ma,
						isl_multi_aff_from_aff(aff));
	}

	insert = isl_map_from_multi_aff(isl_multi_aff_copy(ma));
	map = isl_map_apply_domain(map, insert);
	map = isl_map_equate(map, isl_dim_in, n_in, isl_dim_out, d);
	pma = isl_pw_multi_aff_from_map(map);
	pma = isl_pw_multi_aff_pullback_multi_aff(pma, ma);

	return pma;
}

/* Is constraint "c" of the form
 *
 *	e(...) + c1 - m x >= 0
 *
 * or
 *
 *	-e(...) + c2 + m x >= 0
 *
 * where m > 1 and e only depends on parameters and input dimemnsions?
 *
 * "offset" is the offset of the output dimensions
 * "pos" is the position of output dimension x.
 */
static int is_potential_div_constraint(isl_int *c, int offset, int d, int total)
{
	if (isl_int_is_zero(c[offset + d]))
		return 0;
	if (isl_int_is_one(c[offset + d]))
		return 0;
	if (isl_int_is_negone(c[offset + d]))
		return 0;
	if (isl_seq_first_non_zero(c + offset, d) != -1)
		return 0;
	if (isl_seq_first_non_zero(c + offset + d + 1,
				    total - (offset + d + 1)) != -1)
		return 0;
	return 1;
}

/* Try and create an isl_pw_multi_aff that is equivalent to the given isl_map.
 *
 * As a special case, we first check if there is any pair of constraints,
 * shared by all the basic maps in "map" that force a given dimension
 * to be equal to the floor of some affine combination of the input dimensions.
 *
 * In particular, if we can find two constraints
 *
 *	e(...) + c1 - m x >= 0		i.e.,		m x <= e(...) + c1
 *
 * and
 *
 *	-e(...) + c2 + m x >= 0		i.e.,		m x >= e(...) - c2
 *
 * where m > 1 and e only depends on parameters and input dimemnsions,
 * and such that
 *
 *	c1 + c2 < m			i.e.,		-c2 >= c1 - (m - 1)
 *
 * then we know that we can take
 *
 *	x = floor((e(...) + c1) / m)
 *
 * without having to perform any computation.
 *
 * Note that we know that
 *
 *	c1 + c2 >= 1
 *
 * If c1 + c2 were 0, then we would have detected an equality during
 * simplification.  If c1 + c2 were negative, then we would have detected
 * a contradiction.
 */
static __isl_give isl_pw_multi_aff *pw_multi_aff_from_map_check_div(
	__isl_take isl_map *map)
{
	int d, dim;
	int i, j, n;
	int offset, total;
	isl_int sum;
	isl_basic_map *hull;

	hull = isl_map_unshifted_simple_hull(isl_map_copy(map));
	if (!hull)
		goto error;

	isl_int_init(sum);
	dim = isl_map_dim(map, isl_dim_out);
	offset = isl_basic_map_offset(hull, isl_dim_out);
	total = 1 + isl_basic_map_total_dim(hull);
	n = hull->n_ineq;
	for (d = 0; d < dim; ++d) {
		for (i = 0; i < n; ++i) {
			if (!is_potential_div_constraint(hull->ineq[i],
							offset, d, total))
				continue;
			for (j = i + 1; j < n; ++j) {
				if (!isl_seq_is_neg(hull->ineq[i] + 1,
						hull->ineq[j] + 1, total - 1))
					continue;
				isl_int_add(sum, hull->ineq[i][0],
						hull->ineq[j][0]);
				if (isl_int_abs_lt(sum,
						    hull->ineq[i][offset + d]))
					break;

			}
			if (j >= n)
				continue;
			isl_int_clear(sum);
			if (isl_int_is_pos(hull->ineq[j][offset + d]))
				j = i;
			return pw_multi_aff_from_map_div(map, hull, d, j);
		}
	}
	isl_int_clear(sum);
	isl_basic_map_free(hull);
	return pw_multi_aff_from_map_base(map);
error:
	isl_map_free(map);
	isl_basic_map_free(hull);
	return NULL;
}

/* Given an affine expression
 *
 *	[A -> B] -> f(A,B)
 *
 * construct an isl_multi_aff
 *
 *	[A -> B] -> B'
 *
 * such that dimension "d" in B' is set to "aff" and the remaining
 * dimensions are set equal to the corresponding dimensions in B.
 * "n_in" is the dimension of the space A.
 * "n_out" is the dimension of the space B.
 *
 * If "is_set" is set, then the affine expression is of the form
 *
 *	[B] -> f(B)
 *
 * and we construct an isl_multi_aff
 *
 *	B -> B'
 */
static __isl_give isl_multi_aff *range_map(__isl_take isl_aff *aff, int d,
	unsigned n_in, unsigned n_out, int is_set)
{
	int i;
	isl_multi_aff *ma;
	isl_space *space, *space2;
	isl_local_space *ls;

	space = isl_aff_get_domain_space(aff);
	ls = isl_local_space_from_space(isl_space_copy(space));
	space2 = isl_space_copy(space);
	if (!is_set)
		space2 = isl_space_range(isl_space_unwrap(space2));
	space = isl_space_map_from_domain_and_range(space, space2);
	ma = isl_multi_aff_alloc(space);
	ma = isl_multi_aff_set_aff(ma, d, aff);

	for (i = 0; i < n_out; ++i) {
		if (i == d)
			continue;
		aff = isl_aff_var_on_domain(isl_local_space_copy(ls),
						isl_dim_set, n_in + i);
		ma = isl_multi_aff_set_aff(ma, i, aff);
	}

	isl_local_space_free(ls);

	return ma;
}

/* Try and create an isl_pw_multi_aff that is equivalent to the given isl_map,
 * taking into account that the dimension at position "d" can be written as
 *
 *	x = m a + f(..)						(1)
 *
 * where m is equal to "gcd".
 * "i" is the index of the equality in "hull" that defines f(..).
 * In particular, the equality is of the form
 *
 *	f(..) - x + m g(existentials) = 0
 *
 * or
 *
 *	-f(..) + x + m g(existentials) = 0
 *
 * We basically plug (1) into "map", resulting in a map with "a"
 * in the range instead of "x".  The corresponding isl_pw_multi_aff
 * defining "a" is then plugged back into (1) to obtain a definition fro "x".
 *
 * Specifically, given the input map
 *
 *	A -> B
 *
 * We first wrap it into a set
 *
 *	[A -> B]
 *
 * and define (1) on top of the corresponding space, resulting in "aff".
 * We use this to create an isl_multi_aff that maps the output position "d"
 * from "a" to "x", leaving all other (intput and output) dimensions unchanged.
 * We plug this into the wrapped map, unwrap the result and compute the
 * corresponding isl_pw_multi_aff.
 * The result is an expression
 *
 *	A -> T(A)
 *
 * We adjust that to
 *
 *	A -> [A -> T(A)]
 *
 * so that we can plug that into "aff", after extending the latter to
 * a mapping
 *
 *	[A -> B] -> B'
 *
 *
 * If "map" is actually a set, then there is no "A" space, meaning
 * that we do not need to perform any wrapping, and that the result
 * of the recursive call is of the form
 *
 *	[T]
 *
 * which is plugged into a mapping of the form
 *
 *	B -> B'
 */
static __isl_give isl_pw_multi_aff *pw_multi_aff_from_map_stride(
	__isl_take isl_map *map, __isl_take isl_basic_map *hull, int d, int i,
	isl_int gcd)
{
	isl_set *set;
	isl_space *space;
	isl_local_space *ls;
	isl_aff *aff;
	isl_multi_aff *ma;
	isl_pw_multi_aff *pma, *id;
	unsigned n_in;
	unsigned o_out;
	unsigned n_out;
	int is_set;

	is_set = isl_map_is_set(map);

	n_in = isl_basic_map_dim(hull, isl_dim_in);
	n_out = isl_basic_map_dim(hull, isl_dim_out);
	o_out = isl_basic_map_offset(hull, isl_dim_out);

	if (is_set)
		set = map;
	else
		set = isl_map_wrap(map);
	space = isl_space_map_from_set(isl_set_get_space(set));
	ma = isl_multi_aff_identity(space);
	ls = isl_local_space_from_space(isl_set_get_space(set));
	aff = isl_aff_alloc(ls);
	if (aff) {
		isl_int_set_si(aff->v->el[0], 1);
		if (isl_int_is_one(hull->eq[i][o_out + d]))
			isl_seq_neg(aff->v->el + 1, hull->eq[i],
				    aff->v->size - 1);
		else
			isl_seq_cpy(aff->v->el + 1, hull->eq[i],
				    aff->v->size - 1);
		isl_int_set(aff->v->el[1 + o_out + d], gcd);
	}
	ma = isl_multi_aff_set_aff(ma, n_in + d, isl_aff_copy(aff));
	set = isl_set_preimage_multi_aff(set, ma);

	ma = range_map(aff, d, n_in, n_out, is_set);

	if (is_set)
		map = set;
	else
		map = isl_set_unwrap(set);
	pma = isl_pw_multi_aff_from_map(set);

	if (!is_set) {
		space = isl_pw_multi_aff_get_domain_space(pma);
		space = isl_space_map_from_set(space);
		id = isl_pw_multi_aff_identity(space);
		pma = isl_pw_multi_aff_range_product(id, pma);
	}
	id = isl_pw_multi_aff_from_multi_aff(ma);
	pma = isl_pw_multi_aff_pullback_pw_multi_aff(id, pma);

	isl_basic_map_free(hull);
	return pma;
}

/* Try and create an isl_pw_multi_aff that is equivalent to the given isl_map.
 *
 * As a special case, we first check if all output dimensions are uniquely
 * defined in terms of the parameters and input dimensions over the entire
 * domain.  If so, we extract the desired isl_pw_multi_aff directly
 * from the affine hull of "map" and its domain.
 *
 * Otherwise, we check if any of the output dimensions is "strided".
 * That is, we check if can be written as
 *
 *	x = m a + f(..)
 *
 * with m greater than 1, a some combination of existentiall quantified
 * variables and f and expression in the parameters and input dimensions.
 * If so, we remove the stride in pw_multi_aff_from_map_stride.
 *
 * Otherwise, we continue with pw_multi_aff_from_map_check_div for a further
 * special case.
 */
__isl_give isl_pw_multi_aff *isl_pw_multi_aff_from_map(__isl_take isl_map *map)
{
	int i, j;
	int sv;
	isl_basic_map *hull;
	unsigned n_out;
	unsigned o_out;
	unsigned n_div;
	unsigned o_div;
	isl_int gcd;

	if (!map)
		return NULL;

	hull = isl_map_affine_hull(isl_map_copy(map));
	sv = isl_basic_map_plain_is_single_valued(hull);
	if (sv >= 0 && sv)
		return plain_pw_multi_aff_from_map(isl_map_domain(map), hull);
	if (sv < 0)
		hull = isl_basic_map_free(hull);
	if (!hull)
		goto error;

	n_div = isl_basic_map_dim(hull, isl_dim_div);
	o_div = isl_basic_map_offset(hull, isl_dim_div);

	if (n_div == 0) {
		isl_basic_map_free(hull);
		return pw_multi_aff_from_map_check_div(map);
	}

	isl_int_init(gcd);

	n_out = isl_basic_map_dim(hull, isl_dim_out);
	o_out = isl_basic_map_offset(hull, isl_dim_out);

	for (i = 0; i < n_out; ++i) {
		for (j = 0; j < hull->n_eq; ++j) {
			isl_int *eq = hull->eq[j];
			isl_pw_multi_aff *res;

			if (!isl_int_is_one(eq[o_out + i]) &&
			    !isl_int_is_negone(eq[o_out + i]))
				continue;
			if (isl_seq_first_non_zero(eq + o_out, i) != -1)
				continue;
			if (isl_seq_first_non_zero(eq + o_out + i + 1,
						    n_out - (i + 1)) != -1)
				continue;
			isl_seq_gcd(eq + o_div, n_div, &gcd);
			if (isl_int_is_zero(gcd))
				continue;
			if (isl_int_is_one(gcd))
				continue;

			res = pw_multi_aff_from_map_stride(map, hull,
								i, j, gcd);
			isl_int_clear(gcd);
			return res;
		}
	}

	isl_int_clear(gcd);
	isl_basic_map_free(hull);
	return pw_multi_aff_from_map_check_div(map);
error:
	isl_map_free(map);
	return NULL;
}

__isl_give isl_pw_multi_aff *isl_pw_multi_aff_from_set(__isl_take isl_set *set)
{
	return isl_pw_multi_aff_from_map(set);
}

/* Convert "map" into an isl_pw_multi_aff (if possible) and
 * add it to *user.
 */
static int pw_multi_aff_from_map(__isl_take isl_map *map, void *user)
{
	isl_union_pw_multi_aff **upma = user;
	isl_pw_multi_aff *pma;

	pma = isl_pw_multi_aff_from_map(map);
	*upma = isl_union_pw_multi_aff_add_pw_multi_aff(*upma, pma);

	return *upma ? 0 : -1;
}

/* Try and create an isl_union_pw_multi_aff that is equivalent
 * to the given isl_union_map.
 * The isl_union_map is required to be single-valued in each space.
 * Otherwise, an error is produced.
 */
__isl_give isl_union_pw_multi_aff *isl_union_pw_multi_aff_from_union_map(
	__isl_take isl_union_map *umap)
{
	isl_space *space;
	isl_union_pw_multi_aff *upma;

	space = isl_union_map_get_space(umap);
	upma = isl_union_pw_multi_aff_empty(space);
	if (isl_union_map_foreach_map(umap, &pw_multi_aff_from_map, &upma) < 0)
		upma = isl_union_pw_multi_aff_free(upma);
	isl_union_map_free(umap);

	return upma;
}

/* Try and create an isl_union_pw_multi_aff that is equivalent
 * to the given isl_union_set.
 * The isl_union_set is required to be a singleton in each space.
 * Otherwise, an error is produced.
 */
__isl_give isl_union_pw_multi_aff *isl_union_pw_multi_aff_from_union_set(
	__isl_take isl_union_set *uset)
{
	return isl_union_pw_multi_aff_from_union_map(uset);
}

/* Return the piecewise affine expression "set ? 1 : 0".
 */
__isl_give isl_pw_aff *isl_set_indicator_function(__isl_take isl_set *set)
{
	isl_pw_aff *pa;
	isl_space *space = isl_set_get_space(set);
	isl_local_space *ls = isl_local_space_from_space(space);
	isl_aff *zero = isl_aff_zero_on_domain(isl_local_space_copy(ls));
	isl_aff *one = isl_aff_zero_on_domain(ls);

	one = isl_aff_add_constant_si(one, 1);
	pa = isl_pw_aff_alloc(isl_set_copy(set), one);
	set = isl_set_complement(set);
	pa = isl_pw_aff_add_disjoint(pa, isl_pw_aff_alloc(set, zero));

	return pa;
}

/* Plug in "subs" for dimension "type", "pos" of "aff".
 *
 * Let i be the dimension to replace and let "subs" be of the form
 *
 *	f/d
 *
 * and "aff" of the form
 *
 *	(a i + g)/m
 *
 * The result is
 *
 *	(a f + d g')/(m d)
 *
 * where g' is the result of plugging in "subs" in each of the integer
 * divisions in g.
 */
__isl_give isl_aff *isl_aff_substitute(__isl_take isl_aff *aff,
	enum isl_dim_type type, unsigned pos, __isl_keep isl_aff *subs)
{
	isl_ctx *ctx;
	isl_int v;

	aff = isl_aff_cow(aff);
	if (!aff || !subs)
		return isl_aff_free(aff);

	ctx = isl_aff_get_ctx(aff);
	if (!isl_space_is_equal(aff->ls->dim, subs->ls->dim))
		isl_die(ctx, isl_error_invalid,
			"spaces don't match", return isl_aff_free(aff));
	if (isl_local_space_dim(subs->ls, isl_dim_div) != 0)
		isl_die(ctx, isl_error_unsupported,
			"cannot handle divs yet", return isl_aff_free(aff));

	aff->ls = isl_local_space_substitute(aff->ls, type, pos, subs);
	if (!aff->ls)
		return isl_aff_free(aff);

	aff->v = isl_vec_cow(aff->v);
	if (!aff->v)
		return isl_aff_free(aff);

	pos += isl_local_space_offset(aff->ls, type);

	isl_int_init(v);
	isl_seq_substitute(aff->v->el, pos, subs->v->el,
			    aff->v->size, subs->v->size, v);
	isl_int_clear(v);

	return aff;
}

/* Plug in "subs" for dimension "type", "pos" in each of the affine
 * expressions in "maff".
 */
__isl_give isl_multi_aff *isl_multi_aff_substitute(
	__isl_take isl_multi_aff *maff, enum isl_dim_type type, unsigned pos,
	__isl_keep isl_aff *subs)
{
	int i;

	maff = isl_multi_aff_cow(maff);
	if (!maff || !subs)
		return isl_multi_aff_free(maff);

	if (type == isl_dim_in)
		type = isl_dim_set;

	for (i = 0; i < maff->n; ++i) {
		maff->p[i] = isl_aff_substitute(maff->p[i], type, pos, subs);
		if (!maff->p[i])
			return isl_multi_aff_free(maff);
	}

	return maff;
}

/* Plug in "subs" for dimension "type", "pos" of "pma".
 *
 * pma is of the form
 *
 *	A_i(v) -> M_i(v)
 *
 * while subs is of the form
 *
 *	v' = B_j(v) -> S_j
 *
 * Each pair i,j such that C_ij = A_i \cap B_i is non-empty
 * has a contribution in the result, in particular
 *
 *	C_ij(S_j) -> M_i(S_j)
 *
 * Note that plugging in S_j in C_ij may also result in an empty set
 * and this contribution should simply be discarded.
 */
__isl_give isl_pw_multi_aff *isl_pw_multi_aff_substitute(
	__isl_take isl_pw_multi_aff *pma, enum isl_dim_type type, unsigned pos,
	__isl_keep isl_pw_aff *subs)
{
	int i, j, n;
	isl_pw_multi_aff *res;

	if (!pma || !subs)
		return isl_pw_multi_aff_free(pma);

	n = pma->n * subs->n;
	res = isl_pw_multi_aff_alloc_size(isl_space_copy(pma->dim), n);

	for (i = 0; i < pma->n; ++i) {
		for (j = 0; j < subs->n; ++j) {
			isl_set *common;
			isl_multi_aff *res_ij;
			int empty;

			common = isl_set_intersect(
					isl_set_copy(pma->p[i].set),
					isl_set_copy(subs->p[j].set));
			common = isl_set_substitute(common,
					type, pos, subs->p[j].aff);
			empty = isl_set_plain_is_empty(common);
			if (empty < 0 || empty) {
				isl_set_free(common);
				if (empty < 0)
					goto error;
				continue;
			}

			res_ij = isl_multi_aff_substitute(
					isl_multi_aff_copy(pma->p[i].maff),
					type, pos, subs->p[j].aff);

			res = isl_pw_multi_aff_add_piece(res, common, res_ij);
		}
	}

	isl_pw_multi_aff_free(pma);
	return res;
error:
	isl_pw_multi_aff_free(pma);
	isl_pw_multi_aff_free(res);
	return NULL;
}

/* Compute the preimage of a range of dimensions in the affine expression "src"
 * under "ma" and put the result in "dst".  The number of dimensions in "src"
 * that precede the range is given by "n_before".  The number of dimensions
 * in the range is given by the number of output dimensions of "ma".
 * The number of dimensions that follow the range is given by "n_after".
 * If "has_denom" is set (to one),
 * then "src" and "dst" have an extra initial denominator.
 * "n_div_ma" is the number of existentials in "ma"
 * "n_div_bset" is the number of existentials in "src"
 * The resulting "dst" (which is assumed to have been allocated by
 * the caller) contains coefficients for both sets of existentials,
 * first those in "ma" and then those in "src".
 * f, c1, c2 and g are temporary objects that have been initialized
 * by the caller.
 *
 * Let src represent the expression
 *
 *	(a(p) + f_u u + b v + f_w w + c(divs))/d
 *
 * and let ma represent the expressions
 *
 *	v_i = (r_i(p) + s_i(y) + t_i(divs'))/m_i
 *
 * We start out with the following expression for dst:
 *
 *	(a(p) + f_u u + 0 y + f_w w + 0 divs' + c(divs) + f \sum_i b_i v_i)/d
 *
 * with the multiplication factor f initially equal to 1
 * and f \sum_i b_i v_i kept separately.
 * For each x_i that we substitute, we multiply the numerator
 * (and denominator) of dst by c_1 = m_i and add the numerator
 * of the x_i expression multiplied by c_2 = f b_i,
 * after removing the common factors of c_1 and c_2.
 * The multiplication factor f also needs to be multiplied by c_1
 * for the next x_j, j > i.
 */
void isl_seq_preimage(isl_int *dst, isl_int *src,
	__isl_keep isl_multi_aff *ma, int n_before, int n_after,
	int n_div_ma, int n_div_bmap,
	isl_int f, isl_int c1, isl_int c2, isl_int g, int has_denom)
{
	int i;
	int n_param, n_in, n_out;
	int o_dst, o_src;

	n_param = isl_multi_aff_dim(ma, isl_dim_param);
	n_in = isl_multi_aff_dim(ma, isl_dim_in);
	n_out = isl_multi_aff_dim(ma, isl_dim_out);

	isl_seq_cpy(dst, src, has_denom + 1 + n_param + n_before);
	o_dst = o_src = has_denom + 1 + n_param + n_before;
	isl_seq_clr(dst + o_dst, n_in);
	o_dst += n_in;
	o_src += n_out;
	isl_seq_cpy(dst + o_dst, src + o_src, n_after);
	o_dst += n_after;
	o_src += n_after;
	isl_seq_clr(dst + o_dst, n_div_ma);
	o_dst += n_div_ma;
	isl_seq_cpy(dst + o_dst, src + o_src, n_div_bmap);

	isl_int_set_si(f, 1);

	for (i = 0; i < n_out; ++i) {
		int offset = has_denom + 1 + n_param + n_before + i;

		if (isl_int_is_zero(src[offset]))
			continue;
		isl_int_set(c1, ma->p[i]->v->el[0]);
		isl_int_mul(c2, f, src[offset]);
		isl_int_gcd(g, c1, c2);
		isl_int_divexact(c1, c1, g);
		isl_int_divexact(c2, c2, g);

		isl_int_mul(f, f, c1);
		o_dst = has_denom;
		o_src = 1;
		isl_seq_combine(dst + o_dst, c1, dst + o_dst,
				c2, ma->p[i]->v->el + o_src, 1 + n_param);
		o_dst += 1 + n_param;
		o_src += 1 + n_param;
		isl_seq_scale(dst + o_dst, dst + o_dst, c1, n_before);
		o_dst += n_before;
		isl_seq_combine(dst + o_dst, c1, dst + o_dst,
				c2, ma->p[i]->v->el + o_src, n_in);
		o_dst += n_in;
		o_src += n_in;
		isl_seq_scale(dst + o_dst, dst + o_dst, c1, n_after);
		o_dst += n_after;
		isl_seq_combine(dst + o_dst, c1, dst + o_dst,
				c2, ma->p[i]->v->el + o_src, n_div_ma);
		o_dst += n_div_ma;
		o_src += n_div_ma;
		isl_seq_scale(dst + o_dst, dst + o_dst, c1, n_div_bmap);
		if (has_denom)
			isl_int_mul(dst[0], dst[0], c1);
	}
}

/* Compute the pullback of "aff" by the function represented by "ma".
 * In other words, plug in "ma" in "aff".  The result is an affine expression
 * defined over the domain space of "ma".
 *
 * If "aff" is represented by
 *
 *	(a(p) + b x + c(divs))/d
 *
 * and ma is represented by
 *
 *	x = D(p) + F(y) + G(divs')
 *
 * then the result is
 *
 *	(a(p) + b D(p) + b F(y) + b G(divs') + c(divs))/d
 *
 * The divs in the local space of the input are similarly adjusted
 * through a call to isl_local_space_preimage_multi_aff.
 */
__isl_give isl_aff *isl_aff_pullback_multi_aff(__isl_take isl_aff *aff,
	__isl_take isl_multi_aff *ma)
{
	isl_aff *res = NULL;
	isl_local_space *ls;
	int n_div_aff, n_div_ma;
	isl_int f, c1, c2, g;

	ma = isl_multi_aff_align_divs(ma);
	if (!aff || !ma)
		goto error;

	n_div_aff = isl_aff_dim(aff, isl_dim_div);
	n_div_ma = ma->n ? isl_aff_dim(ma->p[0], isl_dim_div) : 0;

	ls = isl_aff_get_domain_local_space(aff);
	ls = isl_local_space_preimage_multi_aff(ls, isl_multi_aff_copy(ma));
	res = isl_aff_alloc(ls);
	if (!res)
		goto error;

	isl_int_init(f);
	isl_int_init(c1);
	isl_int_init(c2);
	isl_int_init(g);

	isl_seq_preimage(res->v->el, aff->v->el, ma, 0, 0, n_div_ma, n_div_aff,
			f, c1, c2, g, 1);

	isl_int_clear(f);
	isl_int_clear(c1);
	isl_int_clear(c2);
	isl_int_clear(g);

	isl_aff_free(aff);
	isl_multi_aff_free(ma);
	res = isl_aff_normalize(res);
	return res;
error:
	isl_aff_free(aff);
	isl_multi_aff_free(ma);
	isl_aff_free(res);
	return NULL;
}

/* Compute the pullback of "ma1" by the function represented by "ma2".
 * In other words, plug in "ma2" in "ma1".
 */
__isl_give isl_multi_aff *isl_multi_aff_pullback_multi_aff(
	__isl_take isl_multi_aff *ma1, __isl_take isl_multi_aff *ma2)
{
	int i;
	isl_space *space = NULL;

	ma2 = isl_multi_aff_align_divs(ma2);
	ma1 = isl_multi_aff_cow(ma1);
	if (!ma1 || !ma2)
		goto error;

	space = isl_space_join(isl_multi_aff_get_space(ma2),
				isl_multi_aff_get_space(ma1));

	for (i = 0; i < ma1->n; ++i) {
		ma1->p[i] = isl_aff_pullback_multi_aff(ma1->p[i],
						    isl_multi_aff_copy(ma2));
		if (!ma1->p[i])
			goto error;
	}

	ma1 = isl_multi_aff_reset_space(ma1, space);
	isl_multi_aff_free(ma2);
	return ma1;
error:
	isl_space_free(space);
	isl_multi_aff_free(ma2);
	isl_multi_aff_free(ma1);
	return NULL;
}

/* Extend the local space of "dst" to include the divs
 * in the local space of "src".
 */
__isl_give isl_aff *isl_aff_align_divs(__isl_take isl_aff *dst,
	__isl_keep isl_aff *src)
{
	isl_ctx *ctx;
	int *exp1 = NULL;
	int *exp2 = NULL;
	isl_mat *div;

	if (!src || !dst)
		return isl_aff_free(dst);

	ctx = isl_aff_get_ctx(src);
	if (!isl_space_is_equal(src->ls->dim, dst->ls->dim))
		isl_die(ctx, isl_error_invalid,
			"spaces don't match", goto error);

	if (src->ls->div->n_row == 0)
		return dst;

	exp1 = isl_alloc_array(ctx, int, src->ls->div->n_row);
	exp2 = isl_alloc_array(ctx, int, dst->ls->div->n_row);
	if (!exp1 || (dst->ls->div->n_row && !exp2))
		goto error;

	div = isl_merge_divs(src->ls->div, dst->ls->div, exp1, exp2);
	dst = isl_aff_expand_divs(dst, div, exp2);
	free(exp1);
	free(exp2);

	return dst;
error:
	free(exp1);
	free(exp2);
	return isl_aff_free(dst);
}

/* Adjust the local spaces of the affine expressions in "maff"
 * such that they all have the save divs.
 */
__isl_give isl_multi_aff *isl_multi_aff_align_divs(
	__isl_take isl_multi_aff *maff)
{
	int i;

	if (!maff)
		return NULL;
	if (maff->n == 0)
		return maff;
	maff = isl_multi_aff_cow(maff);
	if (!maff)
		return NULL;

	for (i = 1; i < maff->n; ++i)
		maff->p[0] = isl_aff_align_divs(maff->p[0], maff->p[i]);
	for (i = 1; i < maff->n; ++i) {
		maff->p[i] = isl_aff_align_divs(maff->p[i], maff->p[0]);
		if (!maff->p[i])
			return isl_multi_aff_free(maff);
	}

	return maff;
}

__isl_give isl_aff *isl_aff_lift(__isl_take isl_aff *aff)
{
	aff = isl_aff_cow(aff);
	if (!aff)
		return NULL;

	aff->ls = isl_local_space_lift(aff->ls);
	if (!aff->ls)
		return isl_aff_free(aff);

	return aff;
}

/* Lift "maff" to a space with extra dimensions such that the result
 * has no more existentially quantified variables.
 * If "ls" is not NULL, then *ls is assigned the local space that lies
 * at the basis of the lifting applied to "maff".
 */
__isl_give isl_multi_aff *isl_multi_aff_lift(__isl_take isl_multi_aff *maff,
	__isl_give isl_local_space **ls)
{
	int i;
	isl_space *space;
	unsigned n_div;

	if (ls)
		*ls = NULL;

	if (!maff)
		return NULL;

	if (maff->n == 0) {
		if (ls) {
			isl_space *space = isl_multi_aff_get_domain_space(maff);
			*ls = isl_local_space_from_space(space);
			if (!*ls)
				return isl_multi_aff_free(maff);
		}
		return maff;
	}

	maff = isl_multi_aff_cow(maff);
	maff = isl_multi_aff_align_divs(maff);
	if (!maff)
		return NULL;

	n_div = isl_aff_dim(maff->p[0], isl_dim_div);
	space = isl_multi_aff_get_space(maff);
	space = isl_space_lift(isl_space_domain(space), n_div);
	space = isl_space_extend_domain_with_range(space,
						isl_multi_aff_get_space(maff));
	if (!space)
		return isl_multi_aff_free(maff);
	isl_space_free(maff->space);
	maff->space = space;

	if (ls) {
		*ls = isl_aff_get_domain_local_space(maff->p[0]);
		if (!*ls)
			return isl_multi_aff_free(maff);
	}

	for (i = 0; i < maff->n; ++i) {
		maff->p[i] = isl_aff_lift(maff->p[i]);
		if (!maff->p[i])
			goto error;
	}

	return maff;
error:
	if (ls)
		isl_local_space_free(*ls);
	return isl_multi_aff_free(maff);
}


/* Extract an isl_pw_aff corresponding to output dimension "pos" of "pma".
 */
__isl_give isl_pw_aff *isl_pw_multi_aff_get_pw_aff(
	__isl_keep isl_pw_multi_aff *pma, int pos)
{
	int i;
	int n_out;
	isl_space *space;
	isl_pw_aff *pa;

	if (!pma)
		return NULL;

	n_out = isl_pw_multi_aff_dim(pma, isl_dim_out);
	if (pos < 0 || pos >= n_out)
		isl_die(isl_pw_multi_aff_get_ctx(pma), isl_error_invalid,
			"index out of bounds", return NULL);

	space = isl_pw_multi_aff_get_space(pma);
	space = isl_space_drop_dims(space, isl_dim_out,
				    pos + 1, n_out - pos - 1);
	space = isl_space_drop_dims(space, isl_dim_out, 0, pos);

	pa = isl_pw_aff_alloc_size(space, pma->n);
	for (i = 0; i < pma->n; ++i) {
		isl_aff *aff;
		aff = isl_multi_aff_get_aff(pma->p[i].maff, pos);
		pa = isl_pw_aff_add_piece(pa, isl_set_copy(pma->p[i].set), aff);
	}

	return pa;
}

/* Return an isl_pw_multi_aff with the given "set" as domain and
 * an unnamed zero-dimensional range.
 */
__isl_give isl_pw_multi_aff *isl_pw_multi_aff_from_domain(
	__isl_take isl_set *set)
{
	isl_multi_aff *ma;
	isl_space *space;

	space = isl_set_get_space(set);
	space = isl_space_from_domain(space);
	ma = isl_multi_aff_zero(space);
	return isl_pw_multi_aff_alloc(set, ma);
}

/* Add an isl_pw_multi_aff with the given "set" as domain and
 * an unnamed zero-dimensional range to *user.
 */
static int add_pw_multi_aff_from_domain(__isl_take isl_set *set, void *user)
{
	isl_union_pw_multi_aff **upma = user;
	isl_pw_multi_aff *pma;

	pma = isl_pw_multi_aff_from_domain(set);
	*upma = isl_union_pw_multi_aff_add_pw_multi_aff(*upma, pma);

	return 0;
}

/* Return an isl_union_pw_multi_aff with the given "uset" as domain and
 * an unnamed zero-dimensional range.
 */
__isl_give isl_union_pw_multi_aff *isl_union_pw_multi_aff_from_domain(
	__isl_take isl_union_set *uset)
{
	isl_space *space;
	isl_union_pw_multi_aff *upma;

	if (!uset)
		return NULL;

	space = isl_union_set_get_space(uset);
	upma = isl_union_pw_multi_aff_empty(space);

	if (isl_union_set_foreach_set(uset,
				    &add_pw_multi_aff_from_domain, &upma) < 0)
		goto error;

	isl_union_set_free(uset);
	return upma;
error:
	isl_union_set_free(uset);
	isl_union_pw_multi_aff_free(upma);
	return NULL;
}

/* Convert "pma" to an isl_map and add it to *umap.
 */
static int map_from_pw_multi_aff(__isl_take isl_pw_multi_aff *pma, void *user)
{
	isl_union_map **umap = user;
	isl_map *map;

	map = isl_map_from_pw_multi_aff(pma);
	*umap = isl_union_map_add_map(*umap, map);

	return 0;
}

/* Construct a union map mapping the domain of the union
 * piecewise multi-affine expression to its range, with each dimension
 * in the range equated to the corresponding affine expression on its cell.
 */
__isl_give isl_union_map *isl_union_map_from_union_pw_multi_aff(
	__isl_take isl_union_pw_multi_aff *upma)
{
	isl_space *space;
	isl_union_map *umap;

	if (!upma)
		return NULL;

	space = isl_union_pw_multi_aff_get_space(upma);
	umap = isl_union_map_empty(space);

	if (isl_union_pw_multi_aff_foreach_pw_multi_aff(upma,
					&map_from_pw_multi_aff, &umap) < 0)
		goto error;

	isl_union_pw_multi_aff_free(upma);
	return umap;
error:
	isl_union_pw_multi_aff_free(upma);
	isl_union_map_free(umap);
	return NULL;
}

/* Local data for bin_entry and the callback "fn".
 */
struct isl_union_pw_multi_aff_bin_data {
	isl_union_pw_multi_aff *upma2;
	isl_union_pw_multi_aff *res;
	isl_pw_multi_aff *pma;
	int (*fn)(void **entry, void *user);
};

/* Given an isl_pw_multi_aff from upma1, store it in data->pma
 * and call data->fn for each isl_pw_multi_aff in data->upma2.
 */
static int bin_entry(void **entry, void *user)
{
	struct isl_union_pw_multi_aff_bin_data *data = user;
	isl_pw_multi_aff *pma = *entry;

	data->pma = pma;
	if (isl_hash_table_foreach(data->upma2->dim->ctx, &data->upma2->table,
				   data->fn, data) < 0)
		return -1;

	return 0;
}

/* Call "fn" on each pair of isl_pw_multi_affs in "upma1" and "upma2".
 * The isl_pw_multi_aff from upma1 is stored in data->pma (where data is
 * passed as user field) and the isl_pw_multi_aff from upma2 is available
 * as *entry.  The callback should adjust data->res if desired.
 */
static __isl_give isl_union_pw_multi_aff *bin_op(
	__isl_take isl_union_pw_multi_aff *upma1,
	__isl_take isl_union_pw_multi_aff *upma2,
	int (*fn)(void **entry, void *user))
{
	isl_space *space;
	struct isl_union_pw_multi_aff_bin_data data = { NULL, NULL, NULL, fn };

	space = isl_union_pw_multi_aff_get_space(upma2);
	upma1 = isl_union_pw_multi_aff_align_params(upma1, space);
	space = isl_union_pw_multi_aff_get_space(upma1);
	upma2 = isl_union_pw_multi_aff_align_params(upma2, space);

	if (!upma1 || !upma2)
		goto error;

	data.upma2 = upma2;
	data.res = isl_union_pw_multi_aff_alloc(isl_space_copy(upma1->dim),
				       upma1->table.n);
	if (isl_hash_table_foreach(upma1->dim->ctx, &upma1->table,
				   &bin_entry, &data) < 0)
		goto error;

	isl_union_pw_multi_aff_free(upma1);
	isl_union_pw_multi_aff_free(upma2);
	return data.res;
error:
	isl_union_pw_multi_aff_free(upma1);
	isl_union_pw_multi_aff_free(upma2);
	isl_union_pw_multi_aff_free(data.res);
	return NULL;
}

/* Given two aligned isl_pw_multi_affs A -> B and C -> D,
 * construct an isl_pw_multi_aff (A * C) -> [B -> D].
 */
static __isl_give isl_pw_multi_aff *pw_multi_aff_range_product(
	__isl_take isl_pw_multi_aff *pma1, __isl_take isl_pw_multi_aff *pma2)
{
	isl_space *space;

	space = isl_space_range_product(isl_pw_multi_aff_get_space(pma1),
					isl_pw_multi_aff_get_space(pma2));
	return isl_pw_multi_aff_on_shared_domain_in(pma1, pma2, space,
					    &isl_multi_aff_range_product);
}

/* Given two isl_pw_multi_affs A -> B and C -> D,
 * construct an isl_pw_multi_aff (A * C) -> [B -> D].
 */
__isl_give isl_pw_multi_aff *isl_pw_multi_aff_range_product(
	__isl_take isl_pw_multi_aff *pma1, __isl_take isl_pw_multi_aff *pma2)
{
	return isl_pw_multi_aff_align_params_pw_pw_and(pma1, pma2,
					    &pw_multi_aff_range_product);
}

/* Given two aligned isl_pw_multi_affs A -> B and C -> D,
 * construct an isl_pw_multi_aff (A * C) -> (B, D).
 */
static __isl_give isl_pw_multi_aff *pw_multi_aff_flat_range_product(
	__isl_take isl_pw_multi_aff *pma1, __isl_take isl_pw_multi_aff *pma2)
{
	isl_space *space;

	space = isl_space_range_product(isl_pw_multi_aff_get_space(pma1),
					isl_pw_multi_aff_get_space(pma2));
	space = isl_space_flatten_range(space);
	return isl_pw_multi_aff_on_shared_domain_in(pma1, pma2, space,
					    &isl_multi_aff_flat_range_product);
}

/* Given two isl_pw_multi_affs A -> B and C -> D,
 * construct an isl_pw_multi_aff (A * C) -> (B, D).
 */
__isl_give isl_pw_multi_aff *isl_pw_multi_aff_flat_range_product(
	__isl_take isl_pw_multi_aff *pma1, __isl_take isl_pw_multi_aff *pma2)
{
	return isl_pw_multi_aff_align_params_pw_pw_and(pma1, pma2,
					    &pw_multi_aff_flat_range_product);
}

/* If data->pma and *entry have the same domain space, then compute
 * their flat range product and the result to data->res.
 */
static int flat_range_product_entry(void **entry, void *user)
{
	struct isl_union_pw_multi_aff_bin_data *data = user;
	isl_pw_multi_aff *pma2 = *entry;

	if (!isl_space_tuple_match(data->pma->dim, isl_dim_in,
				 pma2->dim, isl_dim_in))
		return 0;

	pma2 = isl_pw_multi_aff_flat_range_product(
					isl_pw_multi_aff_copy(data->pma),
					isl_pw_multi_aff_copy(pma2));

	data->res = isl_union_pw_multi_aff_add_pw_multi_aff(data->res, pma2);

	return 0;
}

/* Given two isl_union_pw_multi_affs A -> B and C -> D,
 * construct an isl_union_pw_multi_aff (A * C) -> (B, D).
 */
__isl_give isl_union_pw_multi_aff *isl_union_pw_multi_aff_flat_range_product(
	__isl_take isl_union_pw_multi_aff *upma1,
	__isl_take isl_union_pw_multi_aff *upma2)
{
	return bin_op(upma1, upma2, &flat_range_product_entry);
}

/* Replace the affine expressions at position "pos" in "pma" by "pa".
 * The parameters are assumed to have been aligned.
 *
 * The implementation essentially performs an isl_pw_*_on_shared_domain,
 * except that it works on two different isl_pw_* types.
 */
static __isl_give isl_pw_multi_aff *pw_multi_aff_set_pw_aff(
	__isl_take isl_pw_multi_aff *pma, unsigned pos,
	__isl_take isl_pw_aff *pa)
{
	int i, j, n;
	isl_pw_multi_aff *res = NULL;

	if (!pma || !pa)
		goto error;

	if (!isl_space_tuple_match(pma->dim, isl_dim_in, pa->dim, isl_dim_in))
		isl_die(isl_pw_multi_aff_get_ctx(pma), isl_error_invalid,
			"domains don't match", goto error);
	if (pos >= isl_pw_multi_aff_dim(pma, isl_dim_out))
		isl_die(isl_pw_multi_aff_get_ctx(pma), isl_error_invalid,
			"index out of bounds", goto error);

	n = pma->n * pa->n;
	res = isl_pw_multi_aff_alloc_size(isl_pw_multi_aff_get_space(pma), n);

	for (i = 0; i < pma->n; ++i) {
		for (j = 0; j < pa->n; ++j) {
			isl_set *common;
			isl_multi_aff *res_ij;
			int empty;

			common = isl_set_intersect(isl_set_copy(pma->p[i].set),
						   isl_set_copy(pa->p[j].set));
			empty = isl_set_plain_is_empty(common);
			if (empty < 0 || empty) {
				isl_set_free(common);
				if (empty < 0)
					goto error;
				continue;
			}

			res_ij = isl_multi_aff_set_aff(
					isl_multi_aff_copy(pma->p[i].maff), pos,
					isl_aff_copy(pa->p[j].aff));
			res_ij = isl_multi_aff_gist(res_ij,
					isl_set_copy(common));

			res = isl_pw_multi_aff_add_piece(res, common, res_ij);
		}
	}

	isl_pw_multi_aff_free(pma);
	isl_pw_aff_free(pa);
	return res;
error:
	isl_pw_multi_aff_free(pma);
	isl_pw_aff_free(pa);
	return isl_pw_multi_aff_free(res);
}

/* Replace the affine expressions at position "pos" in "pma" by "pa".
 */
__isl_give isl_pw_multi_aff *isl_pw_multi_aff_set_pw_aff(
	__isl_take isl_pw_multi_aff *pma, unsigned pos,
	__isl_take isl_pw_aff *pa)
{
	if (!pma || !pa)
		goto error;
	if (isl_space_match(pma->dim, isl_dim_param, pa->dim, isl_dim_param))
		return pw_multi_aff_set_pw_aff(pma, pos, pa);
	if (!isl_space_has_named_params(pma->dim) ||
	    !isl_space_has_named_params(pa->dim))
		isl_die(isl_pw_multi_aff_get_ctx(pma), isl_error_invalid,
			"unaligned unnamed parameters", goto error);
	pma = isl_pw_multi_aff_align_params(pma, isl_pw_aff_get_space(pa));
	pa = isl_pw_aff_align_params(pa, isl_pw_multi_aff_get_space(pma));
	return pw_multi_aff_set_pw_aff(pma, pos, pa);
error:
	isl_pw_multi_aff_free(pma);
	isl_pw_aff_free(pa);
	return NULL;
}

/* Check that the domain space of "pa" matches "space".
 *
 * Return 0 on success and -1 on error.
 */
int isl_pw_aff_check_match_domain_space(__isl_keep isl_pw_aff *pa,
	__isl_keep isl_space *space)
{
	isl_space *pa_space;
	int match;

	if (!pa || !space)
		return -1;

	pa_space = isl_pw_aff_get_space(pa);

	match = isl_space_match(space, isl_dim_param, pa_space, isl_dim_param);
	if (match < 0)
		goto error;
	if (!match)
		isl_die(isl_pw_aff_get_ctx(pa), isl_error_invalid,
			"parameters don't match", goto error);
	match = isl_space_tuple_match(space, isl_dim_in, pa_space, isl_dim_in);
	if (match < 0)
		goto error;
	if (!match)
		isl_die(isl_pw_aff_get_ctx(pa), isl_error_invalid,
			"domains don't match", goto error);
	isl_space_free(pa_space);
	return 0;
error:
	isl_space_free(pa_space);
	return -1;
}

#undef BASE
#define BASE pw_aff

#include <isl_multi_templ.c>

/* Scale the elements of "pma" by the corresponding elements of "mv".
 */
__isl_give isl_pw_multi_aff *isl_pw_multi_aff_scale_multi_val(
	__isl_take isl_pw_multi_aff *pma, __isl_take isl_multi_val *mv)
{
	int i;

	pma = isl_pw_multi_aff_cow(pma);
	if (!pma || !mv)
		goto error;
	if (!isl_space_tuple_match(pma->dim, isl_dim_out,
					mv->space, isl_dim_set))
		isl_die(isl_pw_multi_aff_get_ctx(pma), isl_error_invalid,
			"spaces don't match", goto error);
	if (!isl_space_match(pma->dim, isl_dim_param,
					mv->space, isl_dim_param)) {
		pma = isl_pw_multi_aff_align_params(pma,
					    isl_multi_val_get_space(mv));
		mv = isl_multi_val_align_params(mv,
					    isl_pw_multi_aff_get_space(pma));
		if (!pma || !mv)
			goto error;
	}

	for (i = 0; i < pma->n; ++i) {
		pma->p[i].maff = isl_multi_aff_scale_multi_val(pma->p[i].maff,
							isl_multi_val_copy(mv));
		if (!pma->p[i].maff)
			goto error;
	}

	isl_multi_val_free(mv);
	return pma;
error:
	isl_multi_val_free(mv);
	isl_pw_multi_aff_free(pma);
	return NULL;
}

/* Internal data structure for isl_union_pw_multi_aff_scale_multi_val.
 * mv contains the mv argument.
 * res collects the results.
 */
struct isl_union_pw_multi_aff_scale_multi_val_data {
	isl_multi_val *mv;
	isl_union_pw_multi_aff *res;
};

/* This function is called for each entry of an isl_union_pw_multi_aff.
 * If the space of the entry matches that of data->mv,
 * then apply isl_pw_multi_aff_scale_multi_val and add the result
 * to data->res.
 */
static int union_pw_multi_aff_scale_multi_val_entry(void **entry, void *user)
{
	struct isl_union_pw_multi_aff_scale_multi_val_data *data = user;
	isl_pw_multi_aff *pma = *entry;

	if (!pma)
		return -1;
	if (!isl_space_tuple_match(pma->dim, isl_dim_out,
				    data->mv->space, isl_dim_set))
		return 0;

	pma = isl_pw_multi_aff_copy(pma);
	pma = isl_pw_multi_aff_scale_multi_val(pma,
						isl_multi_val_copy(data->mv));
	data->res = isl_union_pw_multi_aff_add_pw_multi_aff(data->res, pma);
	if (!data->res)
		return -1;

	return 0;
}

/* Scale the elements of "upma" by the corresponding elements of "mv",
 * for those entries that match the space of "mv".
 */
__isl_give isl_union_pw_multi_aff *isl_union_pw_multi_aff_scale_multi_val(
	__isl_take isl_union_pw_multi_aff *upma, __isl_take isl_multi_val *mv)
{
	struct isl_union_pw_multi_aff_scale_multi_val_data data;

	upma = isl_union_pw_multi_aff_align_params(upma,
						isl_multi_val_get_space(mv));
	mv = isl_multi_val_align_params(mv,
					isl_union_pw_multi_aff_get_space(upma));
	if (!upma || !mv)
		goto error;

	data.mv = mv;
	data.res = isl_union_pw_multi_aff_alloc(isl_space_copy(upma->dim),
						upma->table.n);
	if (isl_hash_table_foreach(upma->dim->ctx, &upma->table,
		       &union_pw_multi_aff_scale_multi_val_entry, &data) < 0)
		goto error;

	isl_multi_val_free(mv);
	isl_union_pw_multi_aff_free(upma);
	return data.res;
error:
	isl_multi_val_free(mv);
	isl_union_pw_multi_aff_free(upma);
	return NULL;
}
