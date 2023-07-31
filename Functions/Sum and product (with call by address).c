//program to find sum and product of two numbers using functions

#include <stdio.h>

#include <stdlib.h>

int add(int *no1, int *no2)

{

    int res;

    res = *no1 + *no2;

    return res;

}

int multiply(int *a, int *b)

{

  int result=(*a)*(*b);

  return result;

}

int main(){

    int num1, num2, ans1,ans2;

    printf("\nEnter the two number: ");

    scanf("%d %d", &num1, &num2);

    ans1 = add(&num1, &num2);

    ans2= multiply(&num1, &num2);

    printf("\nAddition of %d and %d is %d", num1, num2, ans1);

    printf("\nProduct of %d and %d is %d", num1, num2, ans2);

}
