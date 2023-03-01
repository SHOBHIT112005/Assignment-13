#include<stdio.h>
int x,sum=0;
void sumdigit(int x)
{
    if(x!=0)
    {
        sum = sum + x%10;
        x = x/10;
        sumdigit(x);
    }
}
int main()
{
   printf("Enter a positive number\n");
   scanf("%d",&x);
   sumdigit(x);
   printf("The sum of all digits of entered number is :- %d",sum);
   return 0;
}