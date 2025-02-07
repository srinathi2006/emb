#include <stdio.h>

int main() 
{
    int n, sum;
    printf("Enter the number of even numbers to sum: ");
    scanf("%d", &n);
    sum = n * (n + 1);
    printf("Sum of first %d even natural numbers is: %d\n", n, sum);
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}

