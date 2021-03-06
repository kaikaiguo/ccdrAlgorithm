// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// gridCCDr
List gridCCDr(NumericVector cors, List init_betas, NumericVector init_sigmas, IntegerVector nj, IntegerVector indexj, NumericVector aj, NumericVector lambdas, IntegerVector weights, NumericVector params, int verbose);
RcppExport SEXP _ccdrAlgorithm_gridCCDr(SEXP corsSEXP, SEXP init_betasSEXP, SEXP init_sigmasSEXP, SEXP njSEXP, SEXP indexjSEXP, SEXP ajSEXP, SEXP lambdasSEXP, SEXP weightsSEXP, SEXP paramsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type cors(corsSEXP);
    Rcpp::traits::input_parameter< List >::type init_betas(init_betasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type init_sigmas(init_sigmasSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nj(njSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type indexj(indexjSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type aj(ajSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(gridCCDr(cors, init_betas, init_sigmas, nj, indexj, aj, lambdas, weights, params, verbose));
    return rcpp_result_gen;
END_RCPP
}
// singleCCDr
List singleCCDr(NumericVector cors, List init_betas, NumericVector init_sigmas, IntegerVector nj, IntegerVector indexj, NumericVector aj, double lambda, IntegerVector weights, NumericVector params, int verbose);
RcppExport SEXP _ccdrAlgorithm_singleCCDr(SEXP corsSEXP, SEXP init_betasSEXP, SEXP init_sigmasSEXP, SEXP njSEXP, SEXP indexjSEXP, SEXP ajSEXP, SEXP lambdaSEXP, SEXP weightsSEXP, SEXP paramsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type cors(corsSEXP);
    Rcpp::traits::input_parameter< List >::type init_betas(init_betasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type init_sigmas(init_sigmasSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nj(njSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type indexj(indexjSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type aj(ajSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(singleCCDr(cors, init_betas, init_sigmas, nj, indexj, aj, lambda, weights, params, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ccdrAlgorithm_gridCCDr", (DL_FUNC) &_ccdrAlgorithm_gridCCDr, 10},
    {"_ccdrAlgorithm_singleCCDr", (DL_FUNC) &_ccdrAlgorithm_singleCCDr, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_ccdrAlgorithm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
