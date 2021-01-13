#include <iostream>
using namespace std;

int main()
{
    long n, a = 5, ans = 0;
    cin >> n;
    
    while((n / a) != 0){
        ans += n / a;
        a = a * 5;
    }

    cout << ans << endl;

    return 0;
}