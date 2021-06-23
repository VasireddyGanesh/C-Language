//to print the repeated integers frequency
#include<stdio.h>
int main()
{
    int arr[5],abb[5],i,j,a,n=0,count=0,step=0,frq[5];
    for(i=0;i<5;i++)
    {
    scanf("%d",arr+i);
    }
    for(j=0;j<5;j++)
    {
     for(i=0;i<5;i++)
        {
         if(arr[j]==arr[i])
          {
            count++;
          }
        }
      if(count>1)
      {
          for(a=0;a<j;a++)
          {
              if(arr[j]==abb[a])
              {
                  step++;
              }
          }
          if(step>0)
          {
              goto label; 
          }
          else
          {
            abb[n]=arr[j];
            frq[n]=count;
            n++;
          }
      }
      label:count=0;
       step=0;
    }
    if(n>0)
    {
     for(i=0;i<n;i++)
     { 
     printf("no.of '%d' are %d\n",abb[i],frq[i]);
     }
    }
    else
    {
        printf("There are no duplicate elements \n");
    } 
  return 0;
}