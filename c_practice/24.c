#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char *ch;
  ch=(char*)malloc(sizeof(char)*6);
  scanf("%s",ch);
  printf("%s",ch);
  return 0;
}