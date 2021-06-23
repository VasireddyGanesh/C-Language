#include<stdio.h>
 union madam
 {
     int a;
     char ch;
 };
 int main()
 {
     union madam m1;
     m1.a=25;
     m1.ch='a';
     printf("%d",m1.a);
     return 0; 
 }