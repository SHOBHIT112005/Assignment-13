#include<stdio.h>
int N,M,HCF,x;
void hcf(int N, int M,int x)
{
    x = (N < M) ? N : M; // Set x to the smaller of N and M
    if (x != 0)
    {
        if ((N % x == 0) && (M % x == 0))
        {
            HCF = x;
            return; // Base case to stop recursion
        }
        hcf(N,M,x--); // Decrement x and make the recursive call
    }
}
int main()
{
   printf("Enter two numbers\n");
   scanf("%d\n%d", &N, &M);
   hcf(N,M,x);
   printf("The hcf of given numbers is %d", HCF);
   return 0;
}

