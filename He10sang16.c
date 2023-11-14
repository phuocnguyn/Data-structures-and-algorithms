#include "stdio.h"
int main()
{
    int n; 
    scanf ("%d",&n);
    int x1 = -1;
    int x2 = -1;
    int x3 = -1;
    int x4 = -1;
    if (n != 0){
        x1 = n % 16;
        n=n/16;
    }
    if (n != 0){
        x2 = n % 16;
        n=n/16;
    }
    if (n != 0){
        x3 = n % 16;
        n=n/16;
    }
    if (n != 0){
        x4 = n % 16;
        n=n/16;
    }
    if (x4 > 0 && x4 < 10) printf ("%d",x4 );
    else if (x4 >= 10) printf ("%c",x4 - 10 + 'A');
    if (x3 >= 0 && x3 < 10 ) printf ("%d",x3 );
    else if (x4 >= 10) printf ("%c",x3 - 10 + 'A');
    if (x2 >= 0 && x2 < 10) printf ("%d",x2 );
    else if (x2 >= 10) printf ("%c",x2 - 10 + 'A');
    if (x1 >= 0 && x1 < 10) printf ("%d",x1 );
    else if (x1 >= 10) printf ("%c",x1 - 10 + 'A');
}   