#include "../include/operator.h"

double add(double firstnum, double secondnum) {
    double *fn = &firstnum;
    double *sn = &secondnum;

    double *malloc_fn = malloc(*fn);
    double *malloc_sn = malloc(*sn);

    double result = *fn + *sn;

    printf("%f\n", result);

    free(malloc_fn);
    free(malloc_sn);

    return result;
}

double dim(double firstnum, double secondnum) {
    double *fn = &firstnum;
    double *sn = &secondnum;

    double *malloc_fn = malloc(*fn);
    double *malloc_sn = malloc(*sn);

    double result = *fn - *sn;

    printf("%f\n", result);

    free(malloc_fn);
    free(malloc_sn);

    return result;
}


void operate() {
    add(10.1, 10.2);
    dim(10.1, 10.692);
}