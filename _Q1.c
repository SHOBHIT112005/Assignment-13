#include<stdio.h>
int n,count = 1,y,x = 0;
void sum(int n)
{
    
    if(count<=n)
    {
        x = x + count;
        count++;
        sum(n);
    }
}
int main()
{
    printf("Enter a number\n");
    scanf("%d",&n);
    sum(n);
    printf("The sum of %d natural numbers is %d",n,x);
    return 0;
}