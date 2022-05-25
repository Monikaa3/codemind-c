#include<stdio.h>
int main()
{
    int a,n,r,sum=0;
    scanf("%d",&n);
    a=n;
    while(n)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    if(a%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}