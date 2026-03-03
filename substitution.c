#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Check usage
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string key = argv[1];

    // Check length
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    // Check key: only letters + no repeats (case-insensitive)
    int seen[26] = {0};

    for (int i = 0; i < 26; i++)
    {
        if (!isalpha((unsigned char) key[i]))
        {
            printf("Key must only contain alphabetic characters.\n");
            return 1;
        }

        int idx = toupper((unsigned char) key[i]) - 'A';

        if (seen[idx] == 1)
        {
            printf("Key must not contain repeated characters.\n");
            return 1;
        }

        seen[idx] = 1;
    }

    // Get plaintext
    string plaintext = get_string("plaintext:  ");

    // Encrypt
    printf("ciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char c = plaintext[i];

        if (isupper((unsigned char) c))
        {
            int pos = c - 'A';
            printf("%c", toupper((unsigned char) key[pos]));
        }
        else if (islower((unsigned char) c))
        {
            int pos = c - 'a';
            printf("%c", tolower((unsigned char) key[pos]));
        }
        else
        {
            printf("%c", c);
        }
    }

    printf("\n");
    return 0;
}
