#include <stdio.h>
#include <string.h>

int main() {
    char exp[100];
    char op1, op2, op;
    int i = 0, t = 1;

    printf("Enter Expression (e.g., a+b): ");
    scanf("%s", exp);

    while (exp[i] != '\0') {
        if (exp[i+1] == '+' || exp[i+1] == '-' || exp[i+1] == '*' || exp[i+1] == '/') {
            op1 = exp[i];
            op = exp[i+1];
            op2 = exp[i+2];
            printf("t%d = %c %c %c\n", t++, op1, op, op2);
            i += 3;
        } else {
            i++;
        }
    }

    return 0;
}

// Three Added Code
