#include <cs50.h>
#include <ctype.h>
#include <stdio.h>  // header files including standard functions
#include <stdlib.h> // for atoi
#include <string.h>

void encrypt(string text, int shift); // declare's encrypt function, which takes parameters
                                      // string(text) and integer(shift)

int main(int argc, string argv[]) // main funtion.
{
    if (argc != 2) // checks if exactly one comman-line argument (shift value) is provided.
    {
        printf("Usage: ./caesar shift\n"); // if not, shows usage instructions.
        return 1;                          // exits with an error.
    }
    for (int i = 0; argv[1][i] != '\0';
         i++) // validates that shift argument consists of only digits.
    {
        if (!isdigit(argv[1][i])) // if any character us not a digit
        {
            printf("Shift value must be a positive integer.\n"); // print error message
            return 1;                                            // exits with an error.
        }
    }

    int shift = atoi(argv[1]); // converts shift argument from string to integer.
    shift = shift % 26; // normalises shift value, values over 26 will loop back through to 1 etc.

    string plaintext =
        get_string("Enter text: ");       // prompts user to enter plaintext to be encrypted
    printf("Shift: %i\n", shift);         // prints the shift value.
    printf("Plaintext: %s\n", plaintext); // prints the plaintext input

    encrypt(plaintext, shift); // calls the encryp function with the user's input and shift value.
    return 0;                  // exits successfully
}

void encrypt(string text, int shift) // defines the encrypt function and performs the encryption.
{
    printf("Ciphertext: "); // prints the ciphered text output.
    for (int i = 0; text[i] != '\0';
         i++) // for loop, iterates through each character of the text until it reaches the null
              // terminator: '\0' indicating end of the string.
    {
        char c = text[i]; // retrieves the current character.

        if (isalpha(c)) // checks if character is a letter.
        {
            char base =
                islower(c) ? 'a' : 'A'; // determines if character is lowercase/uppercase. Sets base
                                        // to 'a' for lowercase, and 'A' for uppercase.
            char encrypted_char =
                (c - base + shift) % 26 +
                base; // (c-base) converts character into a 0-based index. i.e 'a' becomes 0, 'b'
                      // becomes 1. (+ shift) adds the shift value to index. (% 26) ensures that the
                      // result wraps around itself if exceeding 26. (+ base) converts index back to
                      // character.
            printf("%c", encrypted_char); // outputs the encrypted character
        }
        else
        {
            printf("%c", c); // if character is not an alphabetic letter, prints character as-is.
        }
    }
    printf("\n"); // prints a new line after all characters have been processed.
}
