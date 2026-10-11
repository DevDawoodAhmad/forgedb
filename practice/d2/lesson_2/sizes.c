#include<stdio.h>
#include<stdint.h>
#include<stddef.h>

int main(void){
    printf("char       : %zu byte(s)\n",sizeof(char));
    printf("short      : %zu \n",sizeof(short));
    printf("int        : %zu \n",sizeof(int));
    printf("long       : %zu \n",sizeof(long));
    printf("long long  : %zu \n",sizeof(long long));
    printf("float      : %zu \n",sizeof(float));
    printf("double     : %zu \n",sizeof(double));
    printf("void *     : %zu any pointer\n",sizeof(void *));
    printf("size_t     : %zu \n",sizeof(size_t));
    printf("unit16_t   : %zu \n",sizeof(uint16_t));
    return 0;

}