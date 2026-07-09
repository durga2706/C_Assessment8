#include <stdio.h>
int disp_sum_all_digits(int);
int main()
{
    int x, y;
    printf("Enter a number:");
    scanf("%d", &x);
    y=disp_sum_all_digits(x);
    printf("%d", y);
    return 0;
}
int disp_sum_all_digits(int a)
{
    int rem;
    int sum=0;
    while(a>0)
    {
        rem=a%10;
        sum=sum+rem;
        a=a /10;
    }
    return sum;
}
