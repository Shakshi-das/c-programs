//program to display number of days for a given month
//excluding leap years

#include <stdio.h>
int main() {

    int month;
    printf("enter the number of month:\n");
    scanf("%d",&month);

    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("Number of days is 31");

    else if(month == 2)

    {

        printf("Number of days is 28");

    }    

    else

        printf("Number of days is 30");

    return 0;

}
