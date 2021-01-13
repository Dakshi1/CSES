#include <iostream>
using namespace std;

long power(long x, long y) 
{ 
    if (y == 0) 
        return 1; 
    
    long mod = 1000000007;
    long temp = power(x, y / 2);
    if (y % 2 == 0) 
        return  (temp * temp) % mod; 
    else
        return (x * temp * temp) % mod; 
}

int main()
{
    long n, a = 2, mod = 1000000007;
    cin >> n;
    
    cout << power(a, n) << endl;

    return 0;
}