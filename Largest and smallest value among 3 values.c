//c program to Find the largest and smallest among three numbers supplied by user 

#include <stdio.h>
int main() {

    int n1, n2, n3;

    printf("Enter first number : ");

    scanf("%d", &n1);

    printf("\Enter second number : ");

    scanf("%d",&n2);

    printf("\nEnter third number : ");

    scanf("%d",&n3);

    printf("\nThe biggest number is : ");

    if( (n1 > n2) && (n1 > n3) )

    printf("%d", n1);

    else if(n2 > n3)

    printf("%d", n2);

    else

    printf("%d", n3);

    printf("\nThe smallest number is : ");

    if( (n1 < n2) && (n1 < n3) )

    printf("%d", n1);

    else if(n2 < n3)

    printf("%d", n2);

    else

    printf("%d",n3);

    return 0;

}
