#include <stdio.h>
int disp_2digit_odd_sum_tens7();
int main()
{
    int x;
    x=disp_2digit_odd_sum_tens7();
    printf("%d", x);
    return 0;
}
int disp_2digit_odd_sum_tens7()
{
    int i=71;
    int sum=0;
    while(i<=79)
    {
        sum=sum+i;
        i=i+2;
    }
    return sum;
}
