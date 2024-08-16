Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int s,n;
    printf("enter the number");
    scanf("%d",&n);
    s=snat(n);
    printf("%d",s);
    return 0;
}
 int snat(int n)
 {
     if(n==0)
        return ;
        return n+snat(n-1);
 }