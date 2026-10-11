#include<stdio.h>

int string_to_int(char str[]){

    int total = 0;
    int i = 0;
    while(str[i] != '\0'){
        int currentDigit = str[i] - '0';
        total = (total * 10) + currentDigit;
        i++;
    }
    return total;
}

int main(void){
    char numericString[] = "5243";
    int result = string_to_int(numericString);
    printf("String converted to integer: %d\n",result);
    printf("%d + 100 = %d\n",result , result+100);
    return 0;

}