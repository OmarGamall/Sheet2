

#define READ_BIT(reg, bit) ((reg >> bit) & 1)
#include <stdio.h>

/*  Write c function to count the max number of zeros
    between two ones in the binary representation of a
    number (296384-> {1001000010111000000} return 4).
*/
int Max_Zeros_between_ones(int num)
{
    int max = 0;
    int one_flag = 0;
    int counter = 0;
    for (int i = 0; i < 32; i++)
    {
        if (READ_BIT(num, i) == 1)
        {
            one_flag = 1;
            if (counter > max)
            {
                max = counter;
            }
            counter = 0;
        }

        else
        {
            if (one_flag == 1)
            {
                counter++;
            }
        }
    }
    return max;
}

int main()
{
    printf("%d", Max_Zeros_between_ones(296384));
    return 0;
}