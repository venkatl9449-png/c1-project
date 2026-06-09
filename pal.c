#include <stdio.h>
#include <string.h>
#include "pal.h"

void pallindrom() {
    char str[100];
    int len, flag = 1;

    printf("Enter a word: ");
    scanf("%s", str);

    len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);
}

