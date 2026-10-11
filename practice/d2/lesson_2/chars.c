#include<stdio.h>

int main(void){
    char c = 'A';

    printf(" '%c' has the number %d\n",c,c);
    printf(" c + 1 as a character %c\n",c+1);
    printf("lowercase 'a' - 'A' = %d\n", 'a' - 'A');

    char digit = '7';
    int value = digit - '0';

    printf("digit character '%c' -> number %d\n",digit,value);

    for(char ch = 'a'; ch<='e';ch++){
        printf("%c ",ch);
    }
    printf("\n");
    
    return 0;
}