#include <stdio.h>
#include <stdint.h>

/*Write a C program to take a number and a character
from user if the number is even print the same
character, if the number is odd print the other case of
the character (a->A, B->b)*/

void take_Num_Char(int n, char ch)
{
    //check if its even
    if (n % 2 == 0)
    {
        printf("%c", ch);
    }

    else
    {
        if (ch >= 'a' && ch <= 'z')
            printf("%c", (ch - 'a') + 'A');
        else
            printf("%c", (ch - 'A') + 'a');
    }
}

int main()
{
    take_Num_Char(3,'B');
}