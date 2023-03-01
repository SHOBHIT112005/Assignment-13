#include<stdio.h>
#include<math.h>
int x,n;
void power(int n)
{
    if(n!=0)
    {
        x = pow(x,n);
        power(--n);
    }
}
int main()
{
    printf("Enter the number and the power of the number\n");
    scanf("%d\n%d",&x,&n);
    power(n);
    printf("The entered number raised to the given power is %d",x);
    return 0;
}