// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// netinf_
Rcpp::List netinf_(Rcpp::IntegerVector node_ids, Rcpp::List cascade_nodes, Rcpp::List cascade_times, int n_edges, int model, double lambda);
RcppExport SEXP NetworkInference_netinf_(SEXP node_idsSEXP, SEXP cascade_nodesSEXP, SEXP cascade_timesSEXP, SEXP n_edgesSEXP, SEXP modelSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type node_ids(node_idsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type cascade_nodes(cascade_nodesSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type cascade_times(cascade_timesSEXP);
    Rcpp::traits::input_parameter< int >::type n_edges(n_edgesSEXP);
    Rcpp::traits::input_parameter< int >::type model(modelSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(netinf_(node_ids, cascade_nodes, cascade_times, n_edges, model, lambda));
    return rcpp_result_gen;
END_RCPP
}
