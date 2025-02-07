#include<stdio.h>
int main()
{
    int a,b,result,choice;
    printf("enter the value of a a and b");
    scanf("%d %d",&a,&b);
    printf("enter your choice :1.add 2.sub 3.multi ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        result=a+b;
        printf("the addition of two num is %d",result);
        break;
        case 2:
        result=a-b;
        printf("the subraction of two num is %d",result);
        break;
        case 3:
        result=a*b;
        printf("the multiplication of two number is %d",result);
        break;
        default:
        printf("enter a valid number");

    }
    return 0;
}         
