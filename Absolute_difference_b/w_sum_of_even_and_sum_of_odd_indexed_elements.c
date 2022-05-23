#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum,sum1,dif;
    int arr[n];
    scanf("%d",&n);
    sum=0;
    sum1=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       if(i%2==0)
        {
            sum=sum+arr[i];
        }
        else
        {
        sum1=sum1+arr[i];
        }
    }
    dif=abs(sum1-sum);
    printf("%d",dif);
    return 0;
}

