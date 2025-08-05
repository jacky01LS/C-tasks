#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int points[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10}; // assign points to the 'i'th value

int sum_score(string word); // declare prototype for subfunction below main

int main(void) // main will return an integer, main takes no parameters.
{
    string word1 = get_string("player 1 word? "); // prompt user for 2 input values to compare
    string word2 = get_string("player 2 word? ");

    int score1 = sum_score(word1); // variable 'score1/2' to replace input variable 'word'
    int score2 = sum_score(word2);

    if (score1 > score2)
    {
        printf("player 1 wins! woohoo!!\n");
    }
    else if (score1 < score2)
    {
        printf("player 2 wins! slay queen!!\n");
    }
    else
    {
        printf("damn, yall tied score!\n");
    }
}

int sum_score(
    string word) // subfunction called into main, calculates point value of each word input.
{
    int score = 0; // score value starts at '0'
    for (int i = 0, length = strlen(word); i < length;
         i++) // for loop repeats whilst counter 'i' is less than string length of word input.
    {
        if (isupper(word[i]))
        {
            score +=
                points[word[i] -
                       'A']; // subtract to map index of letters to points array (starting at 0)...
        } // allows for capital and lowercase to be valued equally according to array, not ASCII.
        else if (islower(word[i]))
        {
            score += points[word[i] - 'a'];
        }
    }
    return score; // return the calculated integer values
}
