// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// queue_create
SEXP queue_create();
RcppExport SEXP DataStructures_queue_create() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        SEXP __result = queue_create();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// queue_empty
bool queue_empty(SEXP queue);
RcppExport SEXP DataStructures_queue_empty(SEXP queueSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type queue(queueSEXP );
        bool __result = queue_empty(queue);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// queue_push
void queue_push(SEXP queue, SEXP obj);
RcppExport SEXP DataStructures_queue_push(SEXP queueSEXP, SEXP objSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type queue(queueSEXP );
        Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP );
        queue_push(queue, obj);
    }
    return R_NilValue;
END_RCPP
}
// queue_pop
SEXP queue_pop(SEXP queue);
RcppExport SEXP DataStructures_queue_pop(SEXP queueSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type queue(queueSEXP );
        SEXP __result = queue_pop(queue);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
