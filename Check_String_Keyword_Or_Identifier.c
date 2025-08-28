#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isKeyword(char word[]) {
    char keywords[32][10] = {
        "auto","break","case","char","const","continue","default","do","int",
        "else","enum","extern","float","for","goto","if","long","register",
        "return","short","signed","sizeof","static","struct","switch","typedef",
        "union","unsigned","void","volatile","while","double"
    };

    for (int i = 0; i < 32; i++) {
        if (strcmp(keywords[i], word) == 0)
            return 1;
    }
    return 0;
}

int isValidIdentifier(char word[]) {
    if (!isalpha(word[0]) && word[0] != '_')
        return 0;
    for (int i = 1; word[i] != '\0'; i++) {
        if (!isalnum(word[i]) && word[i] != '_')
            return 0;
    }
    return 1;
}

int main() {
    char word[30];

    printf("Enter a word: ");
    scanf("%s", word);

    if (isKeyword(word)) {
        printf("%s is a Keyword.\n", word);
    } else if (isValidIdentifier(word)) {
        printf("%s is a Valid Identifier.\n", word);
    } else {
        printf("%s is an Invalid Identifier.\n", word);
    }

    return 0;
}

// Check String Keyword Or Identifier
