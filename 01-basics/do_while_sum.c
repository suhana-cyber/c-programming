#include <stdio.h>

int main()
{
    int i = 1, sum = 0;

    do
    {
        printf("%d ", i);
        sum = sum + i;
        i++;
    }
    while(i <= 10);

    printf("\nSum = %d", sum);

    return 0;
}
