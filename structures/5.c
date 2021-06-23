#include<stdio.h>
struct mobile
{
    char *brand;
    int cost;
};
int main()
{
    struct mobile m[3]={"apple",60000,"oneplus",40000,"pixel",35000};
    for(int i=0;i<3;i++)
    printf("%s %d\n",m[i].brand,m[i].cost);
    return 0;
}