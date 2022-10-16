#include "lab_4.h"
#include <stdio.h>

long inRange(int left, int right, int number) {
    long a = (right - number) & 2147483648;
    long b = (number - left) & 2147483648;
    return a + b;
}

void lab_4() {
    printf("%ld", !!inRange(23, 45, 24));
}
