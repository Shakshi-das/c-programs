//program to swap two numbers

#include <stdio.h>

int swap(int * n1, int * n2)

{

  int c;

  c= *n1;

  *n1= *n2;

  *n2=c;

  printf("after swapping the values: \n");

  printf("value of n1-%d \n", n1); 

  printf("value of n2-%d \n\n",n2);

}

int main()

{ 

    int n1,n2;

    printf("enter two numbers: "); 

    scanf("%d %d", &n1, &n2);

    printf("before swapping the values: \n");

    printf("value of n1-%d\n",n1); 

    printf("value of n2-%d \n\n",n2);

    swap (&n1,&n2);

    printf("after swapping the values: \n");

    printf("value of n1-%d \n", n1);

    printf("value of n2-%d \n\n",n2);

    return 0;

}
