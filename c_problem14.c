#include<stdio.h>
void disp_two_digit_square(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    disp_two_digit_square(n);
    return 0;
}
void disp_two_digit_square(int n)
{
    int num, count = 0;
    while(n >= 10)
    {
        num = n % 100;
        if(num==16||num==2||num==36||num==49||num==64||num==81)
        {
            count++;
        }

        n=n/10;
    }
    printf("%d",count);
}
