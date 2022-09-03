#include<stdio.h>
int main()
{
    char str[21];
    scanf("%s",str);
    int i,c=0,d=0,e;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='z')
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    e=c*2;
    if(e==d)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}