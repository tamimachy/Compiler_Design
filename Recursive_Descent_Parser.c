#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char input[10];
int i = 0;

void E();
void T();

void E() {
    T();
    if (input[i] == '+') {
        i++;
        E();
    }
}

void T() {
    if (input[i] == 'i') {
        i++;
    } else {
        printf("Error\n");
        exit(0);
    }
}

int main() {
    printf("Enter expression (e.g. i+i): ");
    scanf("%s", input);
    E();

    if (input[i] == '\0')
        printf("Valid Expression\n");
    else
        printf("Invalid Expression\n");

    return 0;
}

// Recursive Descent Parser
