int gcd(int a,int b)
{
 int i,j,n;
 if(a>b)
 n=a;
 else
 n=b;
 for(i=n;i>=1;i--)
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