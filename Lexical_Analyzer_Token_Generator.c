#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char code[100], ch;
    int i = 0;

    printf("Enter a simple expression: ");
    fgets(code, sizeof(code), stdin);

    while (code[i] != '\0') {
        ch = code[i];

        if (isalpha(ch)) {
            printf("%c --> Identifier\n", ch);
        } else if (isdigit(ch)) {
            printf("%c --> Number\n", ch);
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '=') {
            printf("%c --> Operator\n", ch);
        } else if (ch == ';') {
            printf("%c --> Separator\n", ch);
        }

        i++;
    }

    return 0;
}
