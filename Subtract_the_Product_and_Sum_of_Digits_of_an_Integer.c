#include<stdio.h>
int main(){
    
    int num,prod=1,sum=0,digit;
    scanf("%d",&num);
     
    
    while(num >0){
        
        digit =num %10;
        prod = digit * prod;
        sum = digit + sum;
        num = num/10;
        
    }
    
    printf("%d",prod-sum);
    
    return 0;
}