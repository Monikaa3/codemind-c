#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d",&r);
    scanf("%d",&c);
    int a[r][c],a1[r][c];
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    int sum1=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum1+=a1[i][j];
        }
    }
    printf("%d",sum1);
}