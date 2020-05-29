#include <stdio.h>
#include <cs50.h>

void draw(int h)
{
    if (h==0)
    {
        return;
    }
    draw (h-1);

    for (int i = 0; i<h; i++)
    {
        printf("#");
    }
    printf("\n");
    //draw (h-1);
}

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}