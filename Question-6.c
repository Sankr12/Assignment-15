//Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void ReverseEvenN(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    ReverseEvenN(a);
    return 0;
}
void ReverseEvenN(int n)
{
    int a;
    if(n>0)
    {
        printf("%d ",2*n);
        ReverseEvenN(n-1);
    }
    a++;
}
