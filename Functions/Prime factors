//program to print prime factors of a number

#include <stdio.h>

int prime(int num)  

{  

    int count, i, j, isPrime;  

    printf("\nPrime Factors of %d are ..\n", num);  

    for(i=2; i<=num; i++)

    {

        if(num%i==0)

        {

            isPrime = 1;

            for(j=2; j<=i/2; j++)

            {

                if(i%j==0)

                {

                    isPrime = 0;

                    break;

                }

            }

            if(isPrime==1)

            {

                printf("%d, ", i);

            }

        }

    } 

    printf("\n");  

}  

  
int main()  

{  

    int num;  

  

    printf("Enter a positive integer\n");  

    scanf("%d", &num);  

  

    prime(num);  

  

    return 0;

}
