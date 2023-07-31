//program to find sum of the elements of an array using
//user defined function

#include <stdio.h>
#include <stdlib.h>

int sum(int*,int);

int main()

{

    int m,i,j,s = 0;

    int* p;

    printf("Enter the size of the array\n");

    scanf("%d",&m);

    p = (int*)malloc(sizeof(int)*m);

    printf("Enter the array elements\n");

    for (i = 0; i < m; i++)

        scanf("%d",p+i);

    s = sum(p,m);

    printf("The sum of elements of the array %d\n",s);

    free(p);

    return 0;

}

int sum(int* p,int size)

{

    int i,s = 0;

    for (i = 0; i < size; i++)

        s += *(p+i);

    return s;

}
