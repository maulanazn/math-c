#include "../include/structure.h"

struct city {
    char *names;
    u_int64_t population;
    int dimension_of_population[10][10][10];
} citizen;

char display_city(struct city cities) {
    char *city_name = cities.names;

    printf("%c\n", *city_name);

    return *city_name;
}

int structure() {

    struct city *arg;
    arg = &citizen;

    int dimension_of_population = (arg->dimension_of_population[3][5][2]);
    int *malloc_dimension_of_population = malloc(dimension_of_population);
    printf("%d", dimension_of_population);
    free(malloc_dimension_of_population);

    u_int64_t citizen_population = (arg->population = 1231219912939);
    u_int64_t *malloc_citizen_population = malloc(citizen_population);
    printf("%ud\n", citizen_population);
    free(malloc_citizen_population);

    return 0;
}