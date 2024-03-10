//program to print half pyramid of numbers

#include <stdio.h>

int main() {

    int rows, i, j;
    printf("Enter Number Of Rows You Want: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++) {
       for(j=1; j<=i; j++) {
           printf("%d ", j);
       }

    printf("\n");
  }

  return 0;

}
