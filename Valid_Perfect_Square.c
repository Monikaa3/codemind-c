#include<stdio.h>
int main()
{
    int n,arr[1000],i,p,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=arr[i]/2;j++)
        {
            p=j*j;
            if(arr[i]==p)
            {
                printf("True
");
                break;
            }
        }
        if(arr[i]!=p)
        {
            printf("False
");
        }
    }
}