/*Write a program to count the number of 1’s in an 
unsigned 32-bit integer*/
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

#define READ_BIT(reg,bit)  ((reg>>bit)&1)


int Count_BinaryOnes(int num)
{
    int counter = 0;
    for (int i = 0; i < 31; i++)
    {
        if (READ_BIT(num, i) == 1)
            counter++;
    }
    return counter;
}


// Unit test function
void test_Count_binaryOnes()
{
    int num1 = 0b10101010; // Binary representation of 170
    int num2 = 0b11111111; // Binary representation of 255
    int num3 = 0b00000000; // Binary representation of 0
    int num4 = 0b01010101; // Binary representation of 85

    assert(Count_binaryOnes(num1) == 4);
    assert(Count_binaryOnes(num2) == 8);
    assert(Count_binaryOnes(num3) == 0);
    assert(Count_binaryOnes(num4) == 4);

    printf("All test cases passed.\n");
}

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
    test_Count_binaryOnes();
    return 0;
}