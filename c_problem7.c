#include<stdio.h>
int disp_reverse_number(int);
int main()
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    y=disp_reverse_number(x);
    printf("%d",y);
    return 0;
}
int disp_reverse_number(int a)
{
    int rem;
    int rev=0;
    while(a>0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    return rev;
}
