//Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sumSquare(int);
int main()
{
    int a,b;
    printf("Enter a Number: ");
    scanf("%d",&a);
    b = sumSquare(a);
    printf("Sum of Square of first %d numbers = %d",a,b);
}
int sumSquare(int i)
{
    if(i==1){
        return 1;
    }
    return i*i+sumSquare(i-1);
}
