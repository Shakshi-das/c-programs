//program to search an item in an array

#include <stdio.h>

int main()

{

    int n = 0 , arr[100] , ele = 0 , flag = 0 , index = 0;
    printf("Enter the size of array: \n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)

    {

        printf("Enter a number: ");
        scanf("%d",&arr[i]);

    }

    printf("Enter the elemnet to be searched: ");
    scanf("%d",&ele);

    for (int i = 0; i < n; i++)

    {

        if(arr[i] == ele)

        {

            flag = 1;
            index = i;
            break;

        }

    }

    if(flag == 1)

        printf("Element found at index : %d",index);

    else

        printf("Sorry,Element not found!!");

    return 0;

}
