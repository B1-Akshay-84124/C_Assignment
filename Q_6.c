//  Q6. Write a program to perform matrix multiplication.

#include<stdio.h>

int main(){
    int m,n,a,b;
    
    printf("Enter the dimenssion of first matrix : ");
    scanf("%d %d",&m,&n);
    printf("%d %d",m,n);
    int A[m][n];
    printf("Enter the dimenssion of Second matrix : ");
    scanf("%d %d",&a,&b);
    int B[a][b];
    int C[m][b];
    if(n!=a){
        printf("\nError : Column no of 1st matrix and row no of 2nd matrix are not same ");
    } 
    else{
      
    printf("Enter the first matrix : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("Enter the Second matrix : \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d", &B[i][j]);
        }
        printf("\n");
        
    }

    printf("Multiplied Matrix :\n");

    for(int i=0;i<m;i++){
        for(int j=0;j<b;j++){
            C[i][j]=0;
            for(int k=0;k<n;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
            printf("%d ",C[i][j]);

        }
        printf("\n");
    }
}
}