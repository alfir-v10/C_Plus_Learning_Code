#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        d = a;
        a = b;
        b = d;
    }
    if (b > c)
    {
        d = c;
        c = b;
        b = d;
    }
    if (a > b)
    {
        d = a;
        a = b;
        b = d;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}