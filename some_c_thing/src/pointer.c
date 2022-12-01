#include "../include/pointer.h"

int display(char *s) {
    printf("%s", s);

    return 0;
}

int thepointer() {
    int value1, **num, *value2;
    
    value1 = 10;
    value2 = &value1;
    num = &value2;

    int *malloc_num = malloc(**num);
    printf("%d\n", **num);
    free(malloc_num);
    
    char *spotify = "spotify";
    char *malloc_spotify = malloc(*spotify);
    display(spotify);
    free(malloc_spotify);

    return 0;
}