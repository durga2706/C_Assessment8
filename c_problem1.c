#include <stdio.h>
int disp_sum();
int main()
{
    int x;
    x=disp_sum();
    printf("%d",x);
    return 0;
}
int disp_sum()
{
    int i=1;
    int sum=0;
    while (i<=5)
    {
        sum=sum+i;
        i++;
    }
    return sum;
}
