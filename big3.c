#include <stdio.h>
#include "big3.h"

void biggest3() {
    int a, b, c;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Biggest number is: %d\n", a);
    else if (b >= a && b >= c)
        printf("Biggest number is: %d\n", b);
    else
        printf("Biggest number is: %d\n", c);
}

