#include<stdio.h>
#include "mathutil.h"
#include "mathutil.c"

int main(void){
    printf("add(2,3) = %d\n",add(2,3));
    printf("square(7) = %d\n",square(7));
    return 0;
}