#include<stdio.h>  
 int main()    
{    
int n, reverse=0, rem;    
  scanf("%d", &n);    
  while(n!=0)    
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  }    
  printf("%d",reverse);    
return 0;  
}

