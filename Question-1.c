//Write a recursive function to print first N natural numbers
#include<stdio.h>
#include<conio.h>
void printN(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printN(a);
    return 0;
}
void printN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf("%d ",n)
    }
}
