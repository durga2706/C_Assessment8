#include <stdio.h>
int disp_rsum();
int main()
{
    int x;
    x=disp_rsum();
    printf("%d",x);
    return 0;
}
int disp_rsum()
{
    int i=6;
    int sum=0;
    while(i>=1)
    {
        sum=sum+i;
        i--;
    }
    return sum;
}
