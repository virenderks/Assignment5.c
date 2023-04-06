#include <stdio.h>

int main()
{
    int N, i;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("The first %d odd natural numbers are: ", N);
    for(i = 1; i <= N; i++)
    {
        printf("%d ", 2*i-1);
    }

    return 0;
}
