#include<stdio.h>
int main()
{
    int i,n,count=0;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count++;
        }
        else
        {
            printf("False");
            break;
        }
    }
    if(count==n)
    {
        printf("True");
    }
    return 0;
}