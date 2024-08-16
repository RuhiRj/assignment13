//Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int s;
    s=hcf(45,5);
    printf("%d",s);
    return 0;
}
int hcf(int a,int b)
{
    if(a%b==0)
        return b;
    return hcf(b,a%b);
}