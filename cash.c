#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int change); //declare the functions before main, so that program knows that function is defined later on, and can call into main funtion.
int calculate_dimes(int change); //these are called 'prototypes'
int calculate_nickels(int change);
int calculate_pennies(int change);

int main(void) // integer: the funtion returns an integer. main: function computer looks for.
               // void: because main not taking any parameters/input.
{
    int change; // declares the variable 'change'
    do          // do this/repeat (prompt user), whilst input is less than 0.
    {
        change = get_int("change owed? ");
    }
    while (change < 0);

    int quarters =
        calculate_quarters(change); // quarters counter, calling on sub function from below main.
    change =
        change -
        (quarters * 25); // number value of 'change' decreses as it's passed through the functions.

    int dimes = calculate_dimes(change);
    change = change - (dimes * 10);

    int nickels = calculate_nickels(change);
    change = change - (nickels * 5);

    int pennies = calculate_pennies(change);
    change = change - (pennies * 1);

    int total =
        (quarters + dimes + nickels +
         pennies); // calculate the sum of counter values, to get minimum amount of coins needed.

    printf("%i\n", total); // print sum of coins, no need for 'return' because %\n in place for
                           // 'expect return value'
}

//subfunctions, declared above main. Defined here, main can call these funtions.
int calculate_quarters(int change) // calculate how many '25c' need to be given, subtract the value
                                   // from the input cents.
{
    int quarters = 0;
    while (change >= 25)
    {
        quarters++; // quarters +1 (how many times it loops = how many quarters needed)
        change = change - 25;
    }
    return quarters;
}

int calculate_dimes(int change) // calculate how many '10c' need to be given, subtract the value //sub functions
                                // from the input cents.
{
    int dimes = 0;
    while (change >= 10)
    {
        dimes++;
        change = change - 10;
    }
    return dimes;
}

int calculate_nickels(int change)
{
    int nickels = 0;
    while (change >= 5)
    {
        nickels++;
        change = change - 5;
    }
    return nickels;
}

int calculate_pennies(int change)
{
    int pennies = 0;
    while (change >= 1)
    {
        pennies++;
        change = change - 1;
    }
    return pennies;
}
