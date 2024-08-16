//Write a recursive function to calculate sum of first N odd natural numbers
 #include<stdio.h>
 int main()
 {
     int s,n;
     printf("enter the number");
     scanf("%d",&n);
     s=sod(n);
     printf("%d",s);
     return 0;
 }
 int sod(int n)
 {
     if(n==0)
        return;
     return (2*n-1)+sod(n-1);
 }