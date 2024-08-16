//Write a recursive function to calculate sum of first N even natural numbers
 #include<stdio.h>
 int main()
 {
     int s;
     s=nev(5);
     printf("%d",s);
     return 0;
 }
 int nev(int n)
 {
     if(n==0)
        return;
     return 2*n +nev(n-1);
 }