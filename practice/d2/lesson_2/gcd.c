#include<stdio.h>

static int gcd(int a,int b){
    while(b!=0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(void){
    printf("gcd(48,18) = %d\n",gcd(48,18));
    return 0;
}