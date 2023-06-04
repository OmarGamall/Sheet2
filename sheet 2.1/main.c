#include <stdio.h>
#include <stdint.h>
#define PI   ((double)3.14159)
void Circule_compute (int raduis, int* area, int* circumference);

int main()
{
    int raduis,area,circumferance;
    printf("Raduis= ");
    scanf("%d",&raduis);
    Circule_compute(raduis,&area,&circumferance);
    printf("area= %d ,circumference= %d",area,circumferance);
    return 0;
}

void Circule_compute (int raduis, int* area, int* circumference)
{
    *area=PI*(raduis)*(raduis);
    *circumference=2*PI*(raduis);
}