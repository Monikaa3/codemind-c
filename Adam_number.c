#include<stdio.h>
int main()
{
    int n,s,rev=0,r,rev1=0,r1,s1;
    scanf("%d",&n);
    s=n*n;
    while(n)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    s1=rev*rev;
    while(s1)
    {
        r1=s1%10;rev1=rev1*10+r1;
        s1=s1/10;
    }
    if(rev1==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}