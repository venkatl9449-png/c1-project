#include <stdio.h>
#include "fact.h"

void factorial() {
    int n;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d is %lld\n", n, fact);
}

