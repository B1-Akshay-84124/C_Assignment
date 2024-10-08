#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
     if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    int number = atoi(argv[1]);
    if (number == 0 && *argv[1] != '0') {
        printf("Invalid input. Please provide a valid number as a command-line argument.\n");
        return 1;
    }

    printf("Table of %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}