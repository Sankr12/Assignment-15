//Write a recursive function to calculate sum of first N Square natural numbers
#include<stdio.h>
int sumSquare(int);
int main()
{
    int a,b;
    printf("Enter a Number: ");
    scanf("%d",&a);
    b = sumSquare(a);
    printf("Sum of first %d Square numbers = %d",a,b);
}
int sumSquare(int i)
{
    if(i==1){
        return 2;
    }
    return i*2+sumSquare(i-1);
}
