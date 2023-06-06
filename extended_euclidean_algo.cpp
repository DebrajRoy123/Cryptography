#include <bits/stdc++.h>
using namespace std;
int extended_euclid(int a, int b, int *x, int *y)
{
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
    int x1,y1;
    int gcd = extended_euclid(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}
 
int main()
{
    int x, y, a,b;
    cout<<"Enter two numbers: "; 
    cin>>a>>b;
    int g = extended_euclid(a, b, &x, &y);
    cout << "GCD(" << a << ", " << b
         << ") = " << g << endl;
    return 0;
}