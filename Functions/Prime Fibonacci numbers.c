// program to print prime Fibonacci numbers and
// print all twin primes in it

#include <stdio.h>

int prime(int n)

{

    int count = 0;
    for (int i = 1; i <= n/2; i++)

    {
        if(n%i == 0)
            count++;
    }

    if(count!=1)
        return 0;

    else 
        return 1;

}

int main()

{

    int n = 0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    int n1 = 0, n2 = 1, n3 = 0;
    printf("The prime numbers in fibonacci series: \n");

    for (int i = 2; i < n; i++)
    {

        n3=n1+n2;
        n1=n2;
        n2=n3;

        if(prime(n3) == 1)

            printf("%d\n",n3);

    }

    printf("The twin prime numbers are: \n");

    for (int i = 2; i <= n; i++)

    {

        if(prime(i) && prime(i+2) == 1)

            printf("%d %d\n",i,i+2);

    }

    return 0;

}

