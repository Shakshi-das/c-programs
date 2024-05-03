//program to Input two numbers and swap them

#include <stdio.h>

int main() {
  int a,b,c;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("\n Enter 2nd number : ");
    scanf("%d",&b);
    printf("\n Values before swapping \n ");
    printf("a=%d,b=%d",a,b);
  
    c=a;
    a=b;
    b=c;
  
    printf("\n Values after swapping \n ");
    printf("a=%d,b=%d",a,b);
    printf("\n");
    return 0;
}
