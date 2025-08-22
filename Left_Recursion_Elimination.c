#include <stdio.h>
#include <string.h>

int main() {
    char prod[10], alpha[10], beta[10];
    int i, j = 0, k = 0;

    printf("Enter production (E->E+T): ");
    scanf("%s", prod);

    char A = prod[0];

    for (i = 3; prod[i] != '\0'; i++) {
        if (prod[i] == A)
            continue;
        else if (prod[i] == '+')
            continue;
        else if (i == 3)
            beta[j++] = prod[i];
        else
            alpha[k++] = prod[i];
    }

    beta[j] = '\0';
    alpha[k] = '\0';

    printf("Grammar without left recursion:\n");
    printf("%c->%s%c'\n", A, beta, A);
    printf("%c'->%s%c'|ε\n", A, alpha, A);

    return 0;
}
