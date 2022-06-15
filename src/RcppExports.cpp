// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// calc_dbar_c
arma::mat calc_dbar_c(int nday, int ntupq, arma::mat day_idx, arma::mat tupq_idx, arma::mat ux_window, arma::mat uu_window, Rcpp::List price_slist, Rcpp::List cf_slist);
RcppExport SEXP _ycevo_calc_dbar_c(SEXP ndaySEXP, SEXP ntupqSEXP, SEXP day_idxSEXP, SEXP tupq_idxSEXP, SEXP ux_windowSEXP, SEXP uu_windowSEXP, SEXP price_slistSEXP, SEXP cf_slistSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nday(ndaySEXP);
    Rcpp::traits::input_parameter< int >::type ntupq(ntupqSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type day_idx(day_idxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type tupq_idx(tupq_idxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ux_window(ux_windowSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type uu_window(uu_windowSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type price_slist(price_slistSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type cf_slist(cf_slistSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_dbar_c(nday, ntupq, day_idx, tupq_idx, ux_window, uu_window, price_slist, cf_slist));
    return rcpp_result_gen;
END_RCPP
}
// calc_hhat_num2_c
arma::cube calc_hhat_num2_c(int nday, int ntupq_x, int ntupq_q, arma::mat day_idx, arma::mat tupq_idx_x, arma::mat tupq_idx_q, arma::mat ux_window, arma::mat uq_window, arma::mat uu_window, Rcpp::List cf_slist, arma::vec round);
RcppExport SEXP _ycevo_calc_hhat_num2_c(SEXP ndaySEXP, SEXP ntupq_xSEXP, SEXP ntupq_qSEXP, SEXP day_idxSEXP, SEXP tupq_idx_xSEXP, SEXP tupq_idx_qSEXP, SEXP ux_windowSEXP, SEXP uq_windowSEXP, SEXP uu_windowSEXP, SEXP cf_slistSEXP, SEXP roundSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nday(ndaySEXP);
    Rcpp::traits::input_parameter< int >::type ntupq_x(ntupq_xSEXP);
    Rcpp::traits::input_parameter< int >::type ntupq_q(ntupq_qSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type day_idx(day_idxSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type tupq_idx_x(tupq_idx_xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type tupq_idx_q(tupq_idx_qSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ux_window(ux_windowSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type uq_window(uq_windowSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type uu_window(uu_windowSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type cf_slist(cf_slistSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type round(roundSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_hhat_num2_c(nday, ntupq_x, ntupq_q, day_idx, tupq_idx_x, tupq_idx_q, ux_window, uq_window, uu_window, cf_slist, round));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ycevo_calc_dbar_c", (DL_FUNC) &_ycevo_calc_dbar_c, 8},
    {"_ycevo_calc_hhat_num2_c", (DL_FUNC) &_ycevo_calc_hhat_num2_c, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_ycevo(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
