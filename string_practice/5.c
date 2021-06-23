//to find the frequency of characters
#include<stdio.h>
int main()
{
    char a[15],b[15];
    int freq[15];
    int i,count=0,m,n=0;
    printf("Enter the string \n");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {   
      for(int j=0;a[j]!='\0';j++)
      {
        if(a[i]==a[j])
        {
            count++;
        }
      }
      if(count>1)
      {
        b[i]=a[i];
        freq[i]=count;
        for(m=0;m<i;m++)
        {
            if(b[i]==a[m])
            {
                n++;
            }
        }
        if(n>0)
        {
            goto label;
        }
        else
        {
            printf("%c-%d ",b[i],freq[i]);
        }
      }
      label:count=0;
      n=0;      
    }
    return 0;
}