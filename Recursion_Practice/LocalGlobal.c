#include <stdio.h>

int x = 1;

int func(int y)
{
    y = y * 5;
    x = x + 10;
    return y;
}

int main(void)
{
    int y = 7;
    x = 10;
    func(y);
    printf("x: %i y: %i", x, y);
}