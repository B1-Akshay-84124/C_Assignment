// Q2. Write a program to calculate a Factorial of a number.

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int a=num;
    if(num==0){
        printf("Factorial of 0 is 1");
    }
    else{
    for(int i=num;i>1;i--){
        num*=(i-1);
    }
    printf("Fctorial of a %d is %d",a,num);
    }
}