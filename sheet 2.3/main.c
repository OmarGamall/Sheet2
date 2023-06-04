/*Write a program to reverse a number in decimal
representation (1205->5021).*/
#include <stdio.h>
#include <stdlib.h>
int Reverse_Number(int num);

int main()
{
    int input;
    printf("Enter a number:  ");
    scanf("%d", &input);

    int output = Reverse_Number(input);
    printf("Reversed number: %d\n", output);

    return 0;
}

int Reverse_Number(int num)
{
    int new_num = 0;
    int digit = 0;
    while (num)
    {
        digit = num % 10;
        new_num = new_num * 10 + digit;
        num /= 10;
    }
    return new_num;
}