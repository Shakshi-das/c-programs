//program to find midpoint between two points
//and the distance between them

#include<stdio.h>
#include<math.h>

struct point

{

    int x;

    int y;

};

struct point midpoint(struct point A,struct point B)

{

    struct point C;

    C.x=(A.x+B.x)/2;

    C.y=(A.y+B.y)/2;

    return C;

    

}

int distance(struct point A,struct point B)

{

    int n;

    n=sqrt((B.x-A.x)*2+(B.y-A.y)*2);

    return n;

}

void display(struct point C)

{

    printf("The co-ordinate of the midpoint is %d,%d\n ",C.x,C.y);

}

int main()

{

    struct point A;

    struct point B;

    struct point C;

    printf("Enter the co-ordinates of point A ");

    scanf("%d,%d",&A.x,&A.y);

    printf("Enter the co-ordinates of point B ");

    scanf("%d,%d",&B.x,&B.y);

    int n= distance(A,B);

    C= midpoint(A,B);

    display(C);

    printf("The distance between the two  points is %d\n",n);

}
