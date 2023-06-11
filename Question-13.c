//Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int Factorial(int);
int main()
{
    int a,b;
    printf("Enter a Number: ");
    scanf("%d",&a);
    b = Factorial(a);
    printf("Factorial of first %d numbers = %d",a,b);
}
int Factorial(int i)
{
    if(i==1){
        return 1;
    }
    return i*Factorial(i-1);
}

