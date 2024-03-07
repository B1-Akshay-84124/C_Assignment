/* Q12. Write a Program to reverse the letters present in the given String. Do 
not use strrev() function.*/

#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Original string: %s\n", str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
