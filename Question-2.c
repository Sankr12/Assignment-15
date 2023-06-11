//Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
#include<conio.h>
void reverseN(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    reverseN(a);
    return 0;
}
void reverseN(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        reverseN(n-1);
    }
}
