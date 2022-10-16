#include "lab_3.h"
#include <stdio.h>

void lab_3() {
    int x, z, w, p, r;
// 1
    scanf("%d",&x);

// 2
    printf("%o%c", x,'\n');

// 3
    w = (x&0xAAAFFF) << 4;
    printf("%x%c%c",w,' ','\n');

// 4
    z = ~w;
    printf("%x%c",w,' ');
    printf("%x%c%c",z,' ','\n');

// 5
    scanf("%x",&p);
    r = p & (x&0xAAAFFF);
    printf("%x",r);


}