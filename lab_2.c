#include <stdio.h>
#include "lab_2.h"
#include <math.h>
const int C_ITERS = 20;

long int calculate_fact(int n){
    long int res = 1;
    for(int i = 1; i < n; i++) res += res*i;
    return res;
}
float calculate_degree(float x, int degree){
    float res = 1;
    for(int i=0; i < degree; i++) res *= x;
    return res;
}

float cosine(float x){
    float r_cos = 1;
    int isPlus = 1; // если 0 то +, если 1 то -
    for(int i = 2; i <= C_ITERS; i+=2) {
        if (isPlus == 0) {
            r_cos +=  calculate_degree(x, i) / (float) calculate_fact(i);
            isPlus = 1;
        } else {
            r_cos -= calculate_degree(x, i) / (float) calculate_fact(i);
            isPlus = 0;
        }
    }
    return r_cos;
}

float sine(float x){
    float r_sin = x;
    int isPlus = 1; // если 0 то +, если 1 то -
    for(int i = 3; i <= C_ITERS; i+=2) {
        if (isPlus == 0) {
            r_sin +=  calculate_degree(x, i) / (float) calculate_fact(i);
            isPlus = 1;
        } else {
            r_sin -= calculate_degree(x, i) / (float) calculate_fact(i);
            isPlus = 0;
        }
    }
    return r_sin;
}

float z1_math(float a){
    float rads = M_PI/180 * a;
    float z =2*powf(sinf(3*M_PI - 2*rads), 2) * powf(cosf(5*M_PI + 2*rads), 2);
    return z;
}
float z2_math(float a){
    float rads = M_PI/180 * a;
    float z = (float) 0.25 - (float) 0.25*(sinf((float)(2.5 * M_PI - 8*rads)));
    return z;
}
float own_z1(float a){
    float rads = M_PI/180 * a;
    float z = 2*powf(sine(3*M_PI - 2*rads), 2) * powf(cosine(5*M_PI + 2*rads), 2);
    return z;
}


int lab_2(){
    float a, z1, z2, z3;
    printf("%s", "Enter alpha: ");
    scanf("%f", &a);

    z1 = z1_math(a);
    z2 = own_z1(a);
    z3 = z2_math(a);

    printf("res_math_1: %f\nres_own cos/sin: %f\nres_math_2: %f", z1,z2,z3);
    return 0;
}