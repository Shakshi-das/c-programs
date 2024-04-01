//program to fill Fibonacci series in odd positions
// and prime numbers in even positions in array

#include <stdio.h>

int fibo()

{

    static int n1 = 0, n2 = 1, n3 = 0;
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
    return n3;
}

int prime()

{

    static int a = 2;
    int e = 0;
    int c = 0;

    while(1)
    {

        c = 0;
        for (int i = 1; i <= a/2; i++)
        {

            if(a%i == 0)
                c++;

        }

        if(c != 1)
            a++;

        else 
            break;

    }

    if(c == 1)
        e = a;
        a++;
    return e;

}

int main()

{

    int arr[100] ,n = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {

        if(i%2 == 0)
            arr[i] = prime();

        else
            arr[i] = fibo();

    }

    printf("The resultant array: \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;

}
