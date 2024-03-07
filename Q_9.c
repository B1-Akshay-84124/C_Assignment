/*  Q9. Accept an integer number and when the program is executed print the 
binary, octal and hexadecimal equivalent of the given number.
Sample Output:
terminal> java Test
Enter Number : 20
Given Number :20
Binary equivalent :10100
Octal equivalent :24
Hexadecimal equivalent :14
*/
#include<stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Given Number: %d\n", num);
    
// decimal to binary

    int binary[32];
    int i = 0;
    int temp=num;
    while (temp > 0) {
        binary[i] = temp % 2;
        temp /= 2;
        i++;
    }
    printf("Binary equivalent: ");
    for (int j = i-1 ; j > 0; j--) {
        printf("%d",binary[j]);
    }
    printf("\n");

// decimal to octal
    temp=num;
    int octal[100];
    i = 0;
    while (temp > 0) {
        octal[i] = temp % 8;
        temp /= 8;
        i++;
    }
    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");

// decimal to Hexa-decimal

    char hexadecimal[100];
    temp=num;
    i = 0;
    while (temp > 0) {
        int remainder = temp % 16;
        if (remainder < 10) {
            hexadecimal[i] = remainder + '0';
        } else {
            hexadecimal[i] = remainder + 'A' - 10;
        }
        temp /= 16;
        i++;
    }
    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }

}
