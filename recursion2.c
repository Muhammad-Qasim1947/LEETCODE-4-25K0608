#include <stdio.h>

int fibonacci(int n){
    if (n == 0) {
        return 0;
    }
    if (n == 1 || n == 2){
        return 1;
    } 
    return fibonacci(n-1) + fibonacci(n-2) + fibonacci(n-3);
}

int main(){
    int n;
    printf("Enter The Number : ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("\nFibonacci of %d is : %d", n, result);

    return 0;
}