//program to generate a magic square of order 2

#include<stdio.h>

int main() 

{

  int n,arr[100][100],i=0,j=0;

  printf("enter the size of the array ");

  scanf("%d",&n);

  i=n/2;

  j=n-1;

  for(int k=1;k<=n*n;k++)

  {

    arr[i][j]=k;

    i--;

    j++;

    if(i==-1&&j==n)

    {

        i=0;

        j=n-2;

    }

    else if(i==-1||j==n)

    {

        if(i==-1)

            i=n-1;

        if(j==n)

            j=0;    

    }

    if(arr[i][j]>=1&&arr[i][j]<=n*n)

    {

        i++;

        j=j-2;

    }

  }

  printf("The square matrix is\n");

    for(int i=0;i<n;i++)

    {

        for(int j=0;j<n;j++)

        {

            printf("%d ",arr[i][j]);

        }

        printf("\n");

    }

    return 0;

}
