//program to check if a student is eligible to vote or not

#include<stdio.h>

typedef struct 

{

    int roll;

    int age;

    char name[20];

    char sex;

    int marks;

}data;

int main()

{

    int a;

    char s;

    data arr[100];

    printf("enter the number of student: ");

    scanf("%d",&a);

    for(int i=0;i<a;i++)

    {  

        printf("enter the data of student %d\n",i+1);

        printf("enter the roll of student ");

        scanf("%d",&arr[i].roll);

        printf("enter the age of student ");

        scanf("%d",&arr[i].age);

        printf("enter the name of student ");

        scanf("%s",&arr[i].name);

        printf("enter the sex of student ");

        scanf("%c",&s);

        scanf("%c",&arr[i].sex);

        printf("enter the marks of student ");

        scanf("%d",&arr[i].marks);

        printf("\n");

    }

    for(int i=0;i<a;i++)

   {

      if(arr[i].age>18)

     {

        printf("%s is eligible to vote\n",arr[i].name);

     }

     else

     {

        printf("%s is not eligible to vote\n",arr[i].name);

     }
   }
   
   return 0;
}
