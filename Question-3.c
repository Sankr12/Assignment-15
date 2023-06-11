//Write a recursive function to print first N odd natural numbers
#include<stdio.h>
#include<conio.h>
void OddN(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    OddN(a);
    return 0;
}
void OddN(int n)
{
    int a;
    if(n>0)
    {
        OddN(n-1);
        printf("%d ",2*n-1);
    }
    a++;
}
