#include <stdio.h>
#include <string.h>

struct Symbol {
    char name[20];
    char type[10];
} table[100];

int count = 0;

void insert(char name[], char type[]) {
    strcpy(table[count].name, name);
    strcpy(table[count].type, type);
    count++;
}

void display() {
    printf("Symbol Table:\n");
    printf("Name\tType\n");
    for (int i = 0; i < count; i++) {
        printf("%s\t%s\n", table[i].name, table[i].type);
    }
}

int main() {
    insert("x", "int");
    insert("y", "float");
    insert("z", "char");
    display();
    return 0;
}

// Symbol Table Implementation
