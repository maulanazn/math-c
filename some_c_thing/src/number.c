#include <stdio.h>
#include <stdlib.h>

#define MAX 12

union Number {
    int n;
    int i;
    int num_imaginary;
}num;

int array_of_number() {
    union Number *nm;
    nm = &num;

    printf("enter how many number you want to iterate\n");
    scanf("%d", &nm->n);

    for (nm->i = nm->n; nm->i > 0; nm->i--)
        printf("Number %d\n", nm->i);
    

    return 0;
}

int imaginaries() {
    union Number *nm;
    nm = &num;

    nm->num_imaginary = 10;
    int *ptr_numimaginary = &nm->num_imaginary;

    int *ptr_numimaginary1 = ptr_numimaginary;

    ++ptr_numimaginary;

    {
        printf("%d\n", *ptr_numimaginary1);
    }
    return 0;
}
