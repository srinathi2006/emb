#include <stdio.h>

int main() {
    int n, count=0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    while(n>0)
    {
        printf("%d",n%10);
        n=n/10;
        count++;
    }
    printf("Number of digits: %d\n", count);
    return 0;
}
