#include <stdio.h>
#include "lab_1.h"
void lab_1(){
    float a;
    char b;
    printf("%s", "Enter real num: ");
    scanf("%f", &a);
    printf("%.2f", a);

    printf("%s", "\nEnter symbol: ");
    scanf("%s", &b);
    printf("%c", b);
}