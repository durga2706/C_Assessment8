#include <stdio.h>
int disp_2digit_ones5();
int main()
{
    int x;
    x=disp_2digit_ones5();
    printf("%d",x);
    return 0;
}
int disp_2digit_ones5()
{
    int i=15;
    int sum=0;
    while(i<=95)
    {
        sum=sum+i;
        i=i+10;
    }
    return sum;
}
