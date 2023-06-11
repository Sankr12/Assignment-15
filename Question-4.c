//Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
void ReverseoddN(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    ReverseoddN(a);
    return 0;
}
void ReverseoddN(int n)
{
    int a;
    if(n>0)
    {
        printf("%d ",2*n-1);
        ReverseoddN(n-1);
    }
    a++;
}
