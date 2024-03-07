





#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <num1> <num2> ... <numN>\n", argv[0]);
        return 1;
    }

    int max = atoi(argv[1]); // Convert the first argument to integer and assume it as maximum initially

    for (int i = 2; i < argc; i++) {
      ///  int num = atoi(argv[i]); // Convert current argument to integer
        //int num=argv[i];
        if (argv[i] > max) {
            max = argv[i]; // Update max if the current number is greater
        }
    }

    printf("Maximum number is: %d\n", max);

    return 0;
}