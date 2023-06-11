//Write a recursive function to calculate Sumodd of first N odd natural numbers
#include<stdio.h>
int Sumodd(int);
int main()
{
    int a,b;
    printf("Enter a Number: ");
    scanf("%d",&a);
    b = Sumodd(a);
    printf("Sum of first %d odd numbers = %d",a,b);
}
int Sumodd(int i)
{
    if(i==1){
        return 1;
    }
    return i*2-1+Sumodd(i-1);
}
