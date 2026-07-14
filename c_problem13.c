#include<stdio.h>
void disp_single_digit_square(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    disp_single_digit_square(n);
    return 0;
}
void disp_single_digit_square(int n)
{
    int digit,count = 0;
    while(n>0)
    {
        digit=n%10;
        if(digit==1||digit==4||digit==9)
        {
            count++;
        }
        n=n/10;
    }
    printf("%d",count);
}
