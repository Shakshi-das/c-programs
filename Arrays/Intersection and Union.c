//program to find intersection and Union of two arrays

#include <stdio.h>

int main()

{

    int a[100], b[100];
    int m = 0, n = 0;
    printf("Enter size of first array: ");
    scanf("%d", &m);

    for (int i = 0; i < m; i++)

    {

        printf("Enter a number: ");
        scanf("%d", &a[i]);

    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)

    {

        printf("Enter a number: ");
        scanf("%d", &b[i]);

    }

    int i = 0;
    int j = 0;
    printf("The union of the two sets: ");
    while (i < m && j < n)

    {

        if (a[i] < b[j])

            printf(" %d ", a[i++]);

        else if (b[j] < a[i])

            printf(" %d ", b[j++]);

        else

        {

            printf(" %d ", b[j++]);

            i++;

        }

    }

    while (i < m)
        printf(" %d ", a[i++]);

    while (j < n)
        printf(" %d ", b[j++]);

    printf("\n");

    i = 0;
    j = 0;
    printf("The intersection of the two sets: ");
    while (i < m && j < n)

    {

        if (a[i] < b[j])

            i++;

        else if (b[j] < a[i])

            j++;

        else

        {

            printf(" %d ", b[j++]);

            i++;

        }

    }

    return 0;

}
