#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Scrabble points for A..Z
const int POINTS[26] = {1, 3, 3, 2,1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Returns 0..25 for letters (A/a -> 0, B/b -> 1, ...).
// Returns -1 if it's not a letter.
int letter_index(char c)
{
    if (!isalpha(c))
    {
        return -1;
    }

    c = toupper(c);
    return c - 'A';
}

// Returns the score of ONE character. Non-letters score 0.
int score_char(char c)
{
    int idx = letter_index(c);
    if (idx == -1)
    {
        return 0;
    }

    return POINTS[idx];
}

// Returns the total score of a whole word.
int compute_score(string word)
{
    int total = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        total += score_char(word[i]);
    }

    return total;
}

int main(void)
{
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
