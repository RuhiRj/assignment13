//Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int main()
{
    int s;
    s=sumdi(5678);
    printf("%d",s);
    return 0;
}
int sumdi(int n)
{
    if(n==0)
        return;
    return sumdi(n/10)+(n%10);
}