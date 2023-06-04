/*write a program to print the binary representation of a
number, try not to print zeros on the left (5->print 101)*/
#include <stdio.h>
#define READ_BIT(reg, bit) ((reg >> bit) & 1)

void print_Binary(int num)
{
    int flag = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (READ_BIT(num, i) == 1)
        {
            flag = 1;
        }
        if (flag == 1)
            printf("%d", READ_BIT(num, i));
    }
}


int main()
{
    int num=0;
    printf("Enter num:");
    scanf("%d",&num);
    printf("Binary:");
    print_Binary(num);
    return 0;
}