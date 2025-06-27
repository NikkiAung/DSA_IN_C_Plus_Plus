#include <stdio.h>

#define DATA_SIZE 100

int main() {
    char word;
    printf("Enter a word: ");
    scanf("%c", &word);
    int smallV, bigV;

    smallV = (word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u');
    bigV = (word == 'A' || word == 'E' || word == 'I' || word == 'O' || word == 'U');
    if (smallV || bigV) {
        printf("%c is a vowel", word);
    }else {
        printf("%c is not a vowel", word);
    }
    return 0;
}

