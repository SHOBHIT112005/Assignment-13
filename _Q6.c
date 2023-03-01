#include<stdio.h>
int fact(int);
int y;
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    y = fact(x);
    printf("The factorial of %d is %d.",x,y);
}
int fact(int x)
{
    if(x==1)
    return 1;
    else
    return x*fact(x-1);
}