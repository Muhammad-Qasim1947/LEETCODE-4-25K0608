#include <stdio.h>

int climb(int n){
    if(n == 1) return 1;
    if(n == 2) return 2;

    return climb(n-1) + climb(n-2);
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Number of ways = %d\n", climb(n));
    return 0;
}
