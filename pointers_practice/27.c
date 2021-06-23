//command line arguments

#include<stdio.h>
int main(int argc,char*argv[])
{
  printf("%d %c",argc,*argv[1]);//this is the way of writing command line arguments
  return 0;
}