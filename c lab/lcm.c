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