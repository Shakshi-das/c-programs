//program to check if a matrix is sparse matrix or not

#include<stdio.h>

#include<stdlib.h>

int sparse(int m,int n){

    int arr[10][10];

    int i,j;

    int count=0;

    for(i=0;i<m;i++){

        for(j=0;j<n;j++){

            scanf("%d",&arr[i][j]);

            if (arr[i][j]==0){

                count=count+1;

            }

        }

    }

    return count;

}

int main(){

    int m,n,c,count;

    printf("enter order of matrix:");

    scanf("%d%d",&m,&n);

    printf("enter the elements:");

    sparse(m,n);

    if (c>((m*n)/2)){

        printf("it is a sparse matrix");

    }

    else

        printf("it is not a sparse matrix\n");

    return 0;

}
