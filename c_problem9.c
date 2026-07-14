#include<stdio.h>
void check_last_digit_odd(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    check_last_digit_odd(n);
    return 0;
}
void check_last_digit_odd(int n)
{
    int first,last,temp,pow=1,result;
    last=n%10;
    temp=n;
    while(temp>9)
    {
        temp=temp/10;
        pow=pow*10;
    }
    first=temp;
    if(first%2==0)
    {
        printf("%d",n);
    }
    else
    {
        first=first-1;
        result=(first*pow)+(n%pow);
        printf("%d",result);
    }
}
