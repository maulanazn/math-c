#include "../include/number.h"

int case_1() {
    int N, result;

    printf("enter number\n");
    scanf("%d", &N);

    result = (N > 50) ? N - 25 + 10: N + 10;
    printf("%d", result);

    return 0;
}