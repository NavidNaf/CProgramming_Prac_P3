#include <stdio.h>

void recurse(int x)
{
    int count = x;
    if (x > 5)
    {
        return;
    }

    printf("%i\n", x);
    recurse(count + 1);
    printf("%i\n", x);
}

int main(void)
{
    recurse(1);
}