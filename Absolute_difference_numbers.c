#include<stdio.h>
#include<math.h>
int count(int n)
{
    int len=0;
    while(n>0)
    {
        len++;
        n/=10;
    }
    return len;
}
int diff(int n,int x)
{
    int l,p,last,first,diff;
    p=pow(10,x);
    last=n%p;
    l=count(n);
    while(l!=x)
    {
        n/=10;
        l--;
    }
    first=n;
    return abs(first-last);
}
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    printf("%d",diff(n,x));
}