#include <stdio.h>
int main() 
{
    float a, b, product;
    scanf("%f %f", &a, &b);  
 
    product = a * b;

    printf("%.2lf", product);
    
    return 0;
}