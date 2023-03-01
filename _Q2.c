#include <stdio.h>
int sum_of_odd_numbers(int n)
{
    if (n == 1) {
        return 1;
    }
    int current_number = 2 * n - 1;
    return current_number + sum_of_odd_numbers(n - 1);
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
    int result = sum_of_odd_numbers(n);
    printf("The sum of the first %d odd numbers is %d\n", n, result);
    return 0;
}