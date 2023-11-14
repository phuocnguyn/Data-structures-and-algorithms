#include <stdio.h>

int main()
{
    long n,
        i,
        a = 0;
    do
    {
      scanf("%ld", &i); // so gia tri nguyen nhap vao
    }
    while (i < 1);
    
    for(i;i>0;i--)
    {
        scanf("%ld", &n); // nhap cac so nguyen
        a = a + (n%10); 
    }

    if((a%10)==0)
    {
    	printf("YES\n"); // truong hop tong cac chu so cuoi chia het cho 10
    	printf("%ld", a/10);
	}
    else
    {
    	printf("NO\n");
    	printf("%ld", a); // truong hop tong cac chu so cuoi khong chia het cho 10
    	
	}
    
    
    
}