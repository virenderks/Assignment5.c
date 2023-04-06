#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("Cubes of first %d natural numbers:\n", n);
    for(i=1; i<=n; i++) {
        printf("%d ", i*i*i);
    }
    return 0;
}
