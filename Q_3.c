// Q3. Write a program to calculate Fibonacci Series up to n numbers

#include<stdio.h>

int main(){
    int num;
    printf("Enter the number for which you have to find Fibonacci Series : ");
    scanf("%d",&num);
    int fib=1;
    int n1,n2,n3;
    n1=0;
    n2=1;
    printf("Output: 1");
    for(int i=1;i<num;i++)
    {   
        
        n3=n1+n2;
        printf(", %d",n3);
        n1=n2;
        n2=n3;
    }

}