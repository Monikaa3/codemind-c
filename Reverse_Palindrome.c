#include<stdio.h>
int pal(int n)
{
	int r=0;
	while(n)
	{
		r=r*10+n%10;
		n=n/10;
	}
	return r;
}
int main()
{
	int x;
	scanf("%d",&x);
	start:
	x=x+pal(x);
	while(x>0)
	{
	    if(x==pal(x))
	    {
	        printf("%d",x);
	        break;
	    }
	    else
	    {
	        goto start;
	    }
	}
}