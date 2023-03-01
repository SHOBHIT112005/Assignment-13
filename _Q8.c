#include <stdio.h>
void fibonacci(int n, int a, int b)
{
    if(n > 0) 
    {
        int c = a + b;
        printf("%d ", c);
        fibonacci(n - 1, b, c);
    }
}
int main()
{
    int n;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    int a = 1, b = 1;
    printf("%d %d ", a, b);
    fibonacci(n - 2, a, b);//n-2 is taken as a,b are already printed.
    return 0;
}
