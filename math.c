#include <cs50.h>
#include <stdio.h>

int add(int x, int y);
int subtract(int x, int y);

int main(void)
{
    int a = 5;
    int b = 6;
    int x = 2;
    int y = 8;
    int c = 5;
    int d = 6;

    int sum = add(a, b);
    int sum = add(x, y);
    int sum = add(c, x);
    int sum = add(d, a);




    int minus = subtract(a,b);

    printf("a + b = %i \na - b = %i\n", sum, minus);
}

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}
