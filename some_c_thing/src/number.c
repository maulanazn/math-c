#include <stdio.h>
#include <stdlib.h>

#define MAX 12

int array_of_number() {
    int n;

    printf("enter how many number you want to iterate\n");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
        printf("Number %d\n", i);
   
    return 0;
}

int imaginaries() {
    _Complex double num, num1, num2;

    num = 22.22i;

    printf("%f\n", num);
}
