#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("The squares of the first %d natural numbers are:\n", n);
    for(i = 1; i <= n; i++) {
        printf("%d^2 = %d\n", i, i*i);
    }

    return 0;
}
