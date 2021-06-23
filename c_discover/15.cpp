//void pointers

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int a=10;
    //void *ptr=&a;
    int *ptr2=(int *)malloc(2*sizeof(a));//casting is not necessary in c but necessary in c++.
    *ptr2=12;
    // printf("%d",*ptr2);
    // printf("%d",*ptr2);
    cout<<*ptr2;
    return 0;
}
