#include<stdio.h>
void disp_LCM3(int, int, int);
int main()
{
    int a, b, c;
    printf("Enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    disp_LCM3(a, b, c);
    return 0;
}
void disp_LCM3(int a,int b,int c)
{
    int i, max;
    max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;
    for(i = max; ; i++)
    {
        if(i % a == 0 && i % b == 0 && i % c == 0)
        {
            printf("LCM = %d", i);
            break;
        }
    }
}
