#include <stdio.h>
int factorial(int);
int main() {
    int a,fact;
    printf("Enter any number:");
    scanf("%d",&a);
    fact=factorial(a);
    printf("Factorial of %d: %d\n",a, fact);
    return 0;
}
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
