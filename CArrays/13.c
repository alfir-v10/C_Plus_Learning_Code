#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", abs(i - j) + 1);
        printf("\n");
    }
}