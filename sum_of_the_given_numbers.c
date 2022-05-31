#include<stdio.h>
void sum(int a,int b)
{
    int sum;
    printf("%d
",a+b);
}
int main()
{
    int n,x,y,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        sum(x,y);
    }
    return 0;
}