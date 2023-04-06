#include <stdio.h>

int main() {
    int N, i;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("The first %d even natural numbers in reverse order are: ", N);
    for(i = N * 2; i >= 2; i -= 2) {
        printf("%d ", i);
    }

    return 0;
}
