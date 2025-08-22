#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalpha(ch)) {
        printf("%c is a Letter (Identifier).\n", ch);
    } else if (isdigit(ch)) {
        printf("%c is a Digit (Constant).\n", ch);
    } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=' || ch == '<' || ch == '>') {
        printf("%c is an Operator.\n", ch);
    } else if (ch == ';' || ch == ',' || ch == '(' || ch == ')') {
        printf("%c is a Separator.\n", ch);
    } else {
        printf("%c is a Special Symbol.\n", ch);
    }

    return 0;
}
