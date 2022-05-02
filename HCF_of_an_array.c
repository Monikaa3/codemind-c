#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],j=1,i,hcf;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    hcf=a[0];
    while(j<n)
    {
        if(a[j]%hcf==0)
        {
            j++;
        }
        else
        {
            hcf=a[j]%hcf;
        }
    }
    printf("%d",hcf);
}