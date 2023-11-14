#include <stdio.h>

int main()
{
    long n,t;
    do
    {
        scanf("%ld", &n);
    }
    while(n<=0);
    printf("~");
    do
    {
        t = n%10;
        printf ("%d",t);
        n /= 10;
    }
    while (n>0);
    
    return 0;
}