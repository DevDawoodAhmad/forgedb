#include<stdio.h>
#include<string.h>

void sieve_of_eratosthenes(int n){
    char prime[n+1];
    memset(prime,1,sizeof(prime));

    prime[0] = 0;
    prime[1] = 0;

    for(int p = 2;p*p<=n;p++){
        if(prime[p]==1){
            for(int i = p*p;i<=n;i+=p){
                prime[i] = 0;
            }
        }
    }
    printf("primes below %d:",n);
    for(int p = 2;p<=n;p++){
        if(prime[p]){
            printf(" %d",p);
        }
    }
    printf("\n");

}

int main(void){
    sieve_of_eratosthenes(30);
    return 0;

}