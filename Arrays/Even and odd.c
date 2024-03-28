//program to create separate arrays of even and odd numbers
//and display the count

#include <stdio.h>

int main()

{

    int arr[100],even[100],odd[100],e = 0,o = 0,n = 0;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)

    {
        printf("Enter the number: ");
        scanf("%d",&arr[i]);

    }

    for (int i = 0; i < n; i++)

    {
        if(arr[i]%2 == 0)

        {
            even[e] = arr[i];
            e++;
        }

        else
        {

            odd[o] = arr[i];
            o++;

        }

    }

    printf("The count of even numbers found: %d.\n",e);
    printf("The count of odd numbers found: %d.\n",o);
    printf("Elements of Even array: \n");

    for (int i = 0; i < e; i++)

    {
        printf("%d\n",even[i]);
    }
    printf("Elements of Odd array: \n");

    for (int i = 0; i < o; i++)

    {
        printf("%d\n",odd[i]);
    }

    return 0;

}
