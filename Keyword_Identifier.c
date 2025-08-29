#include <stdio.h>
#include <string.h>

int isKeyword(char str[]) {
    char keywords[32][10] = {
        "auto","break","case","char","const","continue","default","do","int",
        "else","enum","extern","float","for","goto","if","long","register",
        "return","short","signed","sizeof","static","struct","switch","typedef",
        "union","unsigned","void","volatile","while","double"
    };

    for (int i = 0; i < 32; i++) {
        if (strcmp(keywords[i], str) == 0)
            return 1;
    }
    return 0;
}

int main() {
    char word[20];
    printf("Enter a word: ");
    scanf("%s", word);

    if (isKeyword(word))
        printf("%s is a keyword.\n", word);
    else
        printf("%s is not a keyword.\n", word);

    return 0;
}

// Keyword Identifier
