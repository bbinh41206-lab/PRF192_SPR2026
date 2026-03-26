#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}

void displayPrimes(int a[], int n){
    int found = 0;

    for(int i = 0; i < n; i++){
        if(isPrime(a[i])){
            printf("%d ", a[i]);
            found = 1;
        }
    }

    if(found == 0)
        printf("Not found");
}

int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    displayPrimes(a, n);

    return 0;
}