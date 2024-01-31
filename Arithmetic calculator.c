// program to Implement simple arithmetic calculator using 
//switch case

#include <stdio.h>

int main() {

    char ch;

    int a, b, result;

    printf("Enter an Operator (+, *, *, /): ");

    scanf("%c", &ch);

    printf("Enter first operand: \n");

    scanf("%d", &a);

    printf("Enter second operand: \n");

    scanf("%d", &b);

    

    switch(ch){

        case '+':

            result = a + b;

            break;

        case '-':

            result = a - b;

            break;

        case '*':

            result = a * b;

            break;

        case '/':

            result = a / b;

            break;

    }

    printf("Result = %d", result);

    return 0;

}

