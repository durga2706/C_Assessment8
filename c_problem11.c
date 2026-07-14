#include<stdio.h>
void disp_total_odd_digits(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    disp_total_odd_digits(n);
    return 0;
}
void disp_total_odd_digits(int n)
{
    int digit,count=0;
    while(n>0)
    {
        digit=n%10;
        if(digit%2!=0)
        {
            count++;
        }
        n=n/10;
    }
    printf("%d", count);
}
