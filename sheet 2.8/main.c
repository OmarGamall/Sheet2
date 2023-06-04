/*  Write a full C program to take 4 choose from user:
    1-Set bit.
    2-Clear bit
    3-Toggle bit.
    4-Read bit                                      */

#include<stdio.h>
#include<stdlib.h>

#define READ_BIT(reg, bit)          ((reg >> bit) & 1)
#define SET_BIT(reg, bit)           reg = reg | (1 << bit)
#define CLR_BIT(reg, bit)           reg = reg & (~(1 << bit))
#define TOG_BIT(reg, bit)           reg = reg ^ (1 << bit)
#define WRITE_BIT(reg, bit, val)    reg = ((val) ? reg | (1 << bit) : reg & (~(1 << bit)) )


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
    printf("\n");
    //CLR_BIT(num,1);
    WRITE_BIT(num,1,0);
    print_Binary(num);
    return 0;
}