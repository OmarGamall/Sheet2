/*Write c code to reverse bits in an 8-bit number
(149->10010101 return 169->10101001),
(5->00000101 return 160->10100000).*/

#include <stdio.h>
#define READ_BIT(reg, bit) ((reg >> bit) & 1)
#define SET_BIT(reg, bit) reg = reg | (1 << bit)
#define CLR_BIT(reg, bit) reg = reg & (~(1 << bit))
#define TOG_BIT(reg, bit) reg = reg ^ (1 << bit)
#define WRITE_BIT(reg, bit, val) reg = ((val) ? reg | (1 << bit) : reg & (~(1 << bit)))

void print_Binary8bits(int num)
{
    int flag = 0;
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", READ_BIT(num, i));
    }
}

unsigned int Reverse_bits(unsigned int num)
{
    int j = 7;
    int tempbit = 0;
    for (int i = 0; i < j; i++, j--)
    {
        tempbit = READ_BIT(num, j);
        WRITE_BIT(num, j, READ_BIT(num, i));
        WRITE_BIT(num, i, tempbit);
    }
    return num;
}

int main()
{
    int n1 = 5;
    int n2 = 149;
    int n3 = 85;
    int n4 = 7;
    int n5 = 35;
    int n6 = 128;
    int n7 = 15;
    // Test n1
    printf("before: ");
    print_Binary8bits(n1);
    n1 = Reverse_bits(n1);
    printf("\tafter: ");
    print_Binary8bits(n1);
    printf("\n");

    // Test n2
    printf("before: ");
    print_Binary8bits(n2);
    n2 = Reverse_bits(n2);
    printf("\tafter: ");
    print_Binary8bits(n2);
    printf("\n");

    // Test n3
    printf("before: ");
    print_Binary8bits(n3);
    n3 = Reverse_bits(n3);
    printf("\tafter: ");
    print_Binary8bits(n3);
    printf("\n");

    // Test n4
    printf("before: ");
    print_Binary8bits(n4);
    n4 = Reverse_bits(n4);
    printf("\tafter: ");
    print_Binary8bits(n4);
    printf("\n");

    // Test n5
    printf("before: ");
    print_Binary8bits(n5);
    n5 = Reverse_bits(n5);
    printf("\tafter: ");
    print_Binary8bits(n5);
    printf("\n");

    // Test n6
    printf("before: ");
    print_Binary8bits(n6);
    n6 = Reverse_bits(n6);
    printf("\tafter: ");
    print_Binary8bits(n6);
    printf("\n");

    // Test n7
    printf("before: ");
    print_Binary8bits(n7);
    n7 = Reverse_bits(n7);
    printf("\tafter: ");
    print_Binary8bits(n7);
    printf("\n");

    return 0;
}