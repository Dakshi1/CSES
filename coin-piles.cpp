#include <iostream>
using namespace std;

string check(long a, long b){
    if((2 * a - b) < 0 || (2 * a - b) % 3 != 0)
        return "NO";
    
    if((2 * b - a) < 0 || (2 * b - a) % 3 != 0)
        return "NO";
    
    return "YES";
}

int main()
{
    long t, a, b;
    cin >> t;
    
    while(t--){
        cin >> a >> b;
        cout << check(a, b) << endl;
    }

    return 0;
}