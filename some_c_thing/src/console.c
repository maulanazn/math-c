#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

struct askme {
    char name;
    char food;
    char aletter[26];
} akm;

int asking() {
    struct askme *Akm;
    Akm = &akm;
    
    do {
        Akm->name = getchar();

        if (islower(Akm->name)) Akm->name = toupper(Akm->name);
        else Akm->name = tolower(Akm->name);
        

        putchar(Akm->name);
    } while(Akm->name != '.');

    return 0;
}

int askmefood() {
    struct askme *Akm;
    Akm = &akm;

    do {
        printf("What's your favorite food?\n");

        scanf("%s", &Akm->food);
        char *malloc_food = malloc(Akm->food);
        printf("%s\n", &Akm->food);
        free(malloc_food);
    } while(Akm->food != '.');


    return 0;
}

int askmeletter() {
    struct askme *Akm;
    Akm = &akm;

    printf("enter letter by letter\n");

    scanf("[A-Z]", &Akm->aletter);
    char *malloc_aletter = malloc(*Akm->aletter);
    printf("%s\n", Akm->aletter);
    free(malloc_aletter);

    return 0;
}

int limiton() {
    float itsfloat;
    printf("%f\n", sizeof(itsfloat));

   return 0;
}

