#include<stdio.h>
void disp_single_digit_prime(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    disp_single_digit_prime(n);
    return 0;
}
void disp_single_digit_prime(int n)
{
    int digit, count = 0;
    while(n > 0)
    {
        digit = n % 10;
        if(digit==2 || digit==3 || digit==5 || digit==7)
        {
            count++;
        }
        n = n / 10;
    }
    printf("%d",count);
}
