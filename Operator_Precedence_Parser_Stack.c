#include <stdio.h>
#include <string.h>

char stack[20], input[20];
int top = -1, i = 0;

void printStackAndInput() {
    printf("\nSTACK: ");
    for (int j = 0; j <= top; j++)
        printf("%c", stack[j]);
    printf("\tINPUT: ");
    for (int j = i; j < strlen(input); j++)
        printf("%c", input[j]);
}

void push(char symbol) {
    stack[++top] = symbol;
}

char pop() {
    return stack[top--];
}

int main() {
    printf("Enter input string (end with $): ");
    scanf("%s", input);

    push('$');

    printStackAndInput();

    while (1) {
        if (stack[top] == '$' && input[i] == '$') {
            printf("\n\nInput string successfully parsed. ACCEPTED.");
            break;
        }

        if (input[i] == 'i') {
            push('E'); // Reduce i to E
            i++;
            printf("\nAction: i -> E");
        } else if ((stack[top] == 'E') && (input[i] == '+' || input[i] == '*')) {
            push(input[i]); // Shift operator
            i++;
            printf("\nAction: shift operator");
        } else if ((stack[top] == '+' || stack[top] == '*') && input[i] == 'i') {
            push('E');
            i++;
            printf("\nAction: i -> E after operator");
        } else if ((stack[top] == 'E') && (stack[top - 1] == '+' || stack[top - 1] == '*') && (stack[top - 2] == 'E')) {
            // Reduce E + E or E * E to E
            top -= 2;
            stack[top] = 'E';
            printf("\nAction: E op E -> E");
        } else {
            printf("\n\nSyntax Error. REJECTED.");
            break;
        }

        printStackAndInput();
    }

    return 0;
}
// Operator Precedence Parser Stack
