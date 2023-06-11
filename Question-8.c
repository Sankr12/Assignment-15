//Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int sum(int);
int main()
{
    int a,b;
    printf("Enter a Number: ");
    scanf("%d",&a);
    b = sum(a);
    printf("Sum of first %d numbers = %d",a,b);
}
int sum(int i)
{
    if(i==1){
        return 1;
    }
    return i+sum(i-1);
}
