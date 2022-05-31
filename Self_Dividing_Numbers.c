#include<stdio.h>
int prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i>1)
        {
        if(n%i==0)
        {
            if(prime(i)==1)
            {
                c+=1;
            }
        }
        }
    }
    printf("%d",c+1);
}