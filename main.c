#include <stdio.h>
#include "big3.h"
#include "fact.h"
#include "pal.h"

int main() {
    int choice;

    printf("Menu:\n");
    printf("1. Biggest of three numbers\n");
    printf("2. Factorial of a number\n");
    printf("3. Palindrome check\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            biggest3();   // from big3.c
            break;
        case 2:
            factorial();  // from fact.c
            break;
        case 3:
            pallindrom(); // from pal.c
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

