//Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int main()
{
    int s;
    s=fact(5);
    printf("%d",s);
    return 0;
}
int fact(int n)
{
    if(n==0||n==1)
        return;
    return n*fact(n-1);
}