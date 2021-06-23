int fact(int n)
{
 int i,factorial;
 factorial = 1;
 for(i=1;i<=n;i++)
 {
  factorial=factorial * i;
 }
 return factorial;
}