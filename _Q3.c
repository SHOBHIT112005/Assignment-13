#include <stdio.h>
int sum_of_even_numbers(int n)
{
    if (n == 1) {
        return 2;
    }
    int current_number = 2 * n;
    return current_number + sum_of_even_numbers(n - 1);
}
int main()
{
    int n;
    printf("Enter a positive integer:\n");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Error: Input must be a positive integer\n");
        return 1;
    }
    int result = sum_of_even_numbers(n);
    printf("The sum of the first %d even numbers is %d\n", n, result);
    return 0;
}