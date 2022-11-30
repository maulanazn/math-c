#include <stdio.h>
#include <string.h>

int fib(int n) {
   int last = 1;
   int prev = 0;
   int i;

   for (i = 0; i < n; ++i) {
        int next = prev + last;

        prev = last;
        last = next;

        printf("%d\n", next);
   }

   return last;
}

int sequence(int n) {
    for (int i = n; i > 0; i--) {
        printf("%d\n", i);
    }
}

int main()
{
    fib(10);
    sequence(10);

    return 0;
}
