#include <iostream>
using namespace std;
void ThapHaNoi (int n, char x, char y , char z )
{
    if(n == 1)
    {
        cout << "Disk" << n << "move from " << x << "to " << z;
        return;
    }
    else
    {
        ThapHaNoi(n-1,x,y,z);
        ThapHaNoi(1,x,)
    }
}

