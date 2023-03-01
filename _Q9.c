#include<stdio.h>
int x,n,count=0;
void digitcount(int x)
{
    if(x!=0)
    {
        x = x/10;
        count++;
        digitcount(x);
    }

}
int main()
{
   printf("Enter a positive number\n");
   scanf("%d",&x);
   digitcount(x);
   printf("The number of digits in entered number is:- %d \n",count);
   return 0;
}