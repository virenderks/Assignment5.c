#include <stdio.h>

int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("The first %d odd natural numbers in reverse order are:\n", N);

    for(int i = N*2-1; i >= 1; i -= 2) {
        printf("%d ", i);
    }

    return 0;
}
