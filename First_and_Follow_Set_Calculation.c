#include <stdio.h>
#include <ctype.h>
char prod[10][10];
int n;

void FIRST(char c) {
    if (!isupper(c)) {
        printf("%c ", c);
        return;
    }

    for (int i = 0; i < n; i++) {
        if (prod[i][0] == c) {
            if (prod[i][3] == '$')
                printf("ε ");
            else
                FIRST(prod[i][3]);
        }
    }
}

int main() {
    int i;
    char ch;

    printf("Enter number of productions: ");
    scanf("%d", &n);

    printf("Enter productions (E->E+T):\n");
    for (i = 0; i < n; i++)
        scanf("%s", prod[i]);

    printf("Enter non-terminal to find FIRST: ");
    scanf(" %c", &ch);

    printf("FIRST(%c) = { ", ch);
    FIRST(ch);
    printf("}\n");

    return 0;
}
// First & Follow Set Calculation
