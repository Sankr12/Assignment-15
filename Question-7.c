//Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
#include<conio.h>
void SquareN(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    SquareN(a);
    return 0;
}
void SquareN(int n)
{
    if(n>0)
    {
        SquareN(n-1);
        printf("%d ",n*n);
    }
}
