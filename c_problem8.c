#include <stdio.h>
void disp_interchange_first_last_digit(int);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    disp_interchange_first_last_digit(num);
    return 0;
}
void disp_interchange_first_last_digit(int num)
{
    int first,last,middle;
    int temp,place=1;
    last=num%10;
    temp=num;
    while(temp>=10)
    {
        temp=temp/10;
        place=place*10;
    }
    first = temp;
    middle =(num % place)/10;
    num=(last * place)+(middle * 10)+first;
    printf("%d",num);
}
