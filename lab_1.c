#include <stdio.h>
#include "lab_1.h"
#include <stdint.h>
void lab_1(){
    float a;
    char b;
    int i;
    printf("%s", "Enter real num: ");
    scanf("%f", &a);
    printf("%.2f", a);

    printf("%s", "\nEnter symbol:");
    scanf("%s", &b);
    printf("%c", b);
    printf("\n");

    printf("Введите целое число:");
    FILE* f = fopen("/Users/6oy1a/Documents/Projects/untitled/cmake-build-debug/test.txt", "a+");
    if(fprintf(f,"%d",i))
        printf("Целое равно: %d\n",i);

    fprintf( stdout, "Hello, world!\n" );
    printf("\n");

    int x = INT32_MAX + 4;
    printf("%d", x);
}
//2147483647 без + 4
//-2147483645 с + 4
