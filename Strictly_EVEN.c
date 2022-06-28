#include<stdio.h>
int main()
{
    int i,size;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int is_even=1;
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0 && i%2!=0)
        {
            is_even = 0;
            break;
        }
    }
    if(is_even == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}