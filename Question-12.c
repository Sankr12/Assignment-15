//Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int DigitSum(int);
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    b = DigitSum(a);
    printf("Sum of Digits of %d = %d\n",a,b);
}
int DigitSum(int num)
{
    int x;
    if(num<10)
    {
        return num;
    }
    x=num%10;
    return x+DigitSum(num/10);
}
