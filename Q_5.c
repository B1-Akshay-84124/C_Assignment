/* Q5. Write a program to check the input characters for uppercase, 
lowercase, number of digits and other characters. Display appropriate 
message.
*/

# include<stdio.h>

int main()
{
    char ch;
    printf("Enter the charactor : ");
    scanf("%c",&ch);
    int ascii = ch;
    if(65<=ascii && ascii<=90)
        printf("%c is an Uppercase charactor",ch);
    else if (97<=ascii && ascii<=122)
        printf("%c is a lowercase charactor");
    else if (48<=ascii && ascii<=57)
        printf("%c is a digit");
    else
        printf("%c is a other charactor");
        
    return 0;
    
}