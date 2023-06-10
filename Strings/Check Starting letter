//program to find the number of words starting with 'S'.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{

    char string[50];

    char word[15];

    int i = 0, j = 0, k = 0,c = 0;

    printf("Enter the sentence\n");

    gets(string);

    printf("Actual string: %s\n", string);

    while(string[j] != '\0')

        j++;

    string[j] = ' ';

    while (string[i] != '\0')

    {

        if(string[i] != ' ')

            word[k++] = string[i];

        else

        {

            if(word[0] == 's')

                c++;

            k = 0;

        }

        i++;

    }

    printf("There are %d words starting with s\n",c);

    return 0;

}
