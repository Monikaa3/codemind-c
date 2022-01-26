#include <stdio.h>
int main() 
{
    int n1, n2, i;
    scanf("%d %d", &n1, &n2);
    i = (n1 > n2) ? n1 : n2;

    while (1) 
    {
        if (i % n1 == 0 && i % n2 == 0) 
        {
            printf("%d", i);
            break;
        }
        ++i;
    }
    return 0;
}