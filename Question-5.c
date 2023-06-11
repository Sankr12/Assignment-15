//Write a recursive function to print first N even natural numbers
#include<stdio.h>
#include<conio.h>
void EvenN(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    EvenN(a);
    return 0;
}
void EvenN(int n)
{
    int a;
    if(n>0)
    {
        EvenN(n-1);
        printf("%d ",2*n);
    }
    a++;
}
