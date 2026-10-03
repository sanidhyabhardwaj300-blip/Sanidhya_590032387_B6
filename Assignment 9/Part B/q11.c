
#include <stdio.h>

void analyzeString(char str[], int *vowels,
                   int *consonants, int *digits,
                   int *spaces, int *special) {
    int i = 0;
    char ch;

    *vowels = *consonants = 0;
    *digits = *spaces = *special = 0;

    while (str[i] != '\0') {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + ('a' - 'A');

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                (*vowels)++;
            else
                (*consonants)++;
        } else if (ch >= '0' && ch <= '9') {
            (*digits)++;
        } else if (ch == ' ') {
            (*spaces)++;
        } else {
            (*special)++;
        }

        i++;
    }
}

int main(void) {
    char str[500];
    int vowels, consonants, digits, spaces, special;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    analyzeString(str, &vowels, &consonants,
                  &digits, &spaces, &special);

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);
    printf("Special characters = %d\n", special);

    return 0;
}