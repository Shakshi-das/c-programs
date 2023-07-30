//program to design a structure with one integer and one float member
// and perform addition of them

#include <stdio.h>

typedef struct

{

    int x;

    float y;

}xyz;

int main()

{

    xyz v1,v2,v3;

    printf("Enter the values of v1\n");

    scanf("%d%f",&v1.x,&v1.y);

    printf("Enter the values of v2\n");

    scanf("%d%f",&v2.x,&v2.y);

    v3.x = v1.x + v2.x;

    v3.y = v1.y+v2.y;

    printf("The addition is %d and %f ",v3.x,v3.y);

    return 0;

}
