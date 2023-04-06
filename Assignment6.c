#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    printf("The first %d even natural numbers are: ", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", 2 * i);
    }
    
    return 0;
}
