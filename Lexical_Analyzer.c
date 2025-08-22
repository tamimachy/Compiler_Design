#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a line of code: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            printf("%c --> Identifier\n", str[i]);
        } else if (isdigit(str[i])) {
            printf("%c --> Constant\n", str[i]);
        } else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
            printf("%c --> Operator\n", str[i]);
        }
        i++;
    }

    return 0;
}
