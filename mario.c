#include <cs50.h> // library
#include <stdio.h>

int main(void)
{
    int height = get_int("how high? ");
    if (height < 1) // ensuring input is not negative to prevent error
    {
        height = get_int("how high? ");
    }
    for (int i = 0; i < height; i++) // lines
    {
        int spaces = height - (i + 1);   // how many spaces for that particular line
        for (int l = 0; l < spaces; l++) // loop for printing spaces
        {
            printf(" ");
        }
        for (int x = 0; x < height - spaces; x++) // loop for printing hashes
        {
            printf("#");
        }
        printf("\n"); // create new line after printing
    }
}
