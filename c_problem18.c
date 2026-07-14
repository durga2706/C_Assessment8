#include<stdio.h>
void disp_LCM2(int, int);
int main()
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    disp_LCM2(a, b);
    return 0;
}
void disp_LCM2(int a,int b)
{
    int i, max;
    if(a > b)
        max = a;
    else
        max = b;
    for(i = max; ;i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            printf("LCM = %d",i);
            break;
        }
    }
}
