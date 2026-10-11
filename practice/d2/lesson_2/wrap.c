#include<stdio.h>
#include<stddef.h>

int main(void){
    unsigned char c = 250;
    for(int i=0;i<10;i++){
        c++;
    }
    printf("unsigned char after 250 + 10 : %u\n",c);
    

}