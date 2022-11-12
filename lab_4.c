#include "lab_4.h"
#include <stdio.h>

long inRange(int left, int right, int number) {
    long a = (right - number) & 2147483648;
    long b = (number - left) & 2147483648;
    return a + b;
}

void lab_4() {
    printf("%ld", !!inRange(23, 45, 24));
    
    printf("\nInput a num: ");
    int num2;

    scanf("%d",&num2);
    if (num2&(1 << 4)){
        printf(" 1 \n");
    }else{
        printf("0 \n");
    }
}
