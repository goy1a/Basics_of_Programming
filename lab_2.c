#include <stdio.h>
#include "lab_2.h"
#include <math.h>
int lab_2(){
    float alpha, z1, z2;
    printf("%s", "Enter alpha: ");
    scanf("%f", &alpha);
    z1 =  2*powf(sinf((float)(3*M_PI - 2*alpha)), 2) * powf(cosf((float)(5*M_PI + 2*alpha)), 2);
    z2 = (float) 1/4 - (float) 1/4*(sinf((float)((float) 5/2*M_PI - 8*alpha)));
    printf("Your res  1: <%.2f>\nres 2: <%.2f>", z1, z2);
    return 0;
}