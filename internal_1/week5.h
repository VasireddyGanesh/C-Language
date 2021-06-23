int factorial(int n)
{
 int i,fact;
 fact = 1;
 if(n==1 || n==0)
 {
     return 1;
 }
 else
 {
  for(i=1;i<=n;i++)
  {
   fact=fact * i;
  }
 return fact;
 }
}

int factorial_rec(int n)
{
 if(n==1)
 return 1;
 else
 return n*factorial_rec(n-1);
}

int prime(int n)
{
 int i,count;
 count=0;
 for(i=1;i<=n;i++)
 {
     if(n%i==0)
     {
         count++;
     }
 }
return count;
}

int lcm(int a,int b)
{
    int i,n;
    if(a>b)
        n=a;
    else
        n=b;
for(i=n;;i++)
{
    if(i%a==0 && i%b==0)
    goto label;
}
label: return i;
}

int gcd(int a,int b)
{
 int i,j,n;
 if(a>b)
 n=a;
 else
 n=b;
 for(i=n;i<=1;i--)
 {
  if(a%i==0)
   {
        if(b%i==0)
        {
             n=i;
            goto label;
        }
   }
 }
label: return n;
}