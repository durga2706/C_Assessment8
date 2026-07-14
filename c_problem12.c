#include<stdio.h>
void disp_total_2digit_odd(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    disp_total_2digit_odd(n);
    return 0;
}
void disp_total_2digit_odd(int n)
{
    int num,count=0;
    while(n>=10)
    {
        num=n%100;
        if(num%2!=0)
        {
            count++;
        }
        n=n/10;
    }
    printf("%d",count);
}
