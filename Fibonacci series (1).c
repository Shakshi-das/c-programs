//Fibonacci upto n

#include <stdio.h>

int main() {

    int t1 = 0, t2 = 1, c = 0, n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    c = t1 + t2;

    while (c <= n) {

       printf("%d, ", c);

    t1 = t2;
    t2 = c;
    c = t1 + t2;

  }

  return 0;

}
