#include <stdio.h>
#include <stdlib.h>

int maximizingXor(int l, int r) 
{
    int i=0,max=0,xor=0,j=0,temp_l=l;
    for(i=l;i<=r;i++)
    {
       for(j=temp_l;j<=r;j++)
       {
           xor=i^j;
           if(xor>max)
           {
               max=xor;
           }
       } 
       temp_l++;
    }
    return max;
}

int main()
{
    int l,r;
    int ret=0;
    scanf("%d",&l);
    scanf("%d",&r);
    ret=maximizingXor(l,r);
    printf("maxXor=%d",ret);
}