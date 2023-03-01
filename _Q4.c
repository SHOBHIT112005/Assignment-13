#include<stdio.h>
#include<math.h>
int n,count = 0,y,x = 1;
void sum(int n)
{
    if(count<n)
    {
        y = pow((x + count),2)+y;
        count++;
        sum(n);
    }
}
int main()
{
    printf("Enter a number\n");
    scanf("%d",&n);
    sum(n);
    printf("The sum squares of %d natural numbers is %d",n,y);
    return 0;
}