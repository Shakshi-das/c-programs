//program to find value of sin(n) 

#include <stdio.h>
#include <math.h>

int fact(int n)

{

    int i,fact=1
    
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;

}

int main()

{

    float x,Q,sum=0;
    int i,j,limit;
    printf("Enter the value of x of sinx series: ");
    scanf("%f",&x);
    printf("Enter the limit upto which you want to expand the series: ");
    scanf("%d",&limit);

    Q=x;

    x = x*(3.1415/180);

    for(i=1,j=1;i<=limit;i++,j=j+2)

    {

        if(i%2!=0)

        {

            sum=sum+pow(x,j)/fact(j);

        }

        else

            sum=sum-pow(x,j)/fact(j);

    }

    printf("Sin(%0.1f): %f",Q,sum);

    return 0;

}
