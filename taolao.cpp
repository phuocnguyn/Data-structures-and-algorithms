#include <stdio.h>
#include <string.h>
int tong ( int a, int b)
{
  return a + b;
}
void swap (int& a, int& b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main ()
{
    char str[50];
    int len;

    strcpy(str, "Hoc ");

    len = strlen(str);
    printf("Do dai cua chuoi:\n |%s| \nla bang:\n |%d|\n", str, len);
    
    return(0);
}