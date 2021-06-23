#include<stdio.h>
int main()
{
char ch;
scanf("%c",&ch);
if(ch=='a' || ch=='A' ||ch=='e'||ch=='E' || ch=='i'|| ch=='I' ||ch=='o'||ch=='O'||ch=='u'||ch=='U')
{
 printf("vow");
}
else if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
{
 printf("consonant");
}
else if(ch>=48&& ch<=57)
{
    printf("digit");
}
else
 {
     printf("special character");
}


}