#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}



#include <cs50.h>
#include <stdio.h>

int main(void) // main function
{
    int r; // identify 'r' as an integer, r = value of change required
    do // prompt user to input positive integer value
    {
       r = get_int("change owed? ");
    }
    int coins = (25, 10, 5, 1);
    while (r > 0); // ensure value is positive, otherwise prompt user again
    {
        printf("r/coins\n");
    }

}
 if (r <= 0)
    {
       r = get_int("change owed? ");
    }


int main(void) // main function
{
    int r = get_int("change owed? "); // identify 'r' as an integer, r = value of change required
    int coins = (25, 10, 5, 1);
    int n = (r/coins);
    do
    {
        printf("%i/n", n);
    }
    while (r > 0); // ensure value is positive, otherwise prompt user again
    else
    {
        int r = get_int("change owed? ");
    }
}

int main(void) // main function
{       // prompt user for r value
    int r = get_int("change owed? "); // identify 'r' as an integer, r = value of change required
    if (r > 0)
    {
        r = get_int("change owed? ");
    }
    int coint = (25, 10, 5, 1);
    {
        printf("%i\n, r/coins");
    }
}
