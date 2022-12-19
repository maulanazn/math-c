#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int array_of_string() {
    char type[255];
    
    fgets(type, sizeof(type), stdin);
    printf("type whatever you want, you enter %s", type);
    
    return 0;
}

int string_constant() {
    volatile char myname[7] = "maulana";

    printf("%s\n", myname);

    return 0;
}
