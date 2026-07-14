#include<stdio.h>
void disp_count_HCF2(int, int);
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    disp_count_HCF2(a, b);
    return 0;
}
void disp_count_HCF2(int a, int b)
{
    int i, small, hcf;
    if(a < b)
        small = a;
    else
        small = b;
    for(i = 1; i <= small; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    printf("%d", hcf);
}
