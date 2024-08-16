//Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int main()
{
    int s;
    s=ssq(3);
    printf("%d",s);
    return 0;
}
int ssq(int n)
{
    if(n==0)
        return;
    return n*n +ssq(n-1);
}