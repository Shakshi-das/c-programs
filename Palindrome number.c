//program to check palindrome number

#include <stdio.h>

int main() {

    int n, rev = 0, r, s;
    printf("Enter an integer: ");
    scanf("%d", &n);
    s = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {

        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;

    }

    // palindrome if orignal and reversed are equal

    if (s == rev)
        printf("%d is a palindrome.", s);

    else
        printf("%d is not a palindrome.", s);

    return 0;

}
