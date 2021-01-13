#include <bits/stdc++.h>
using namespace std;
long pow(long x){
    long res = 1;
    while(x > 0){
        res = res * 10;
        x--;
    }
    return res;
}

char find_digit(long num){
    long x = 0, dig = 0, y, p;
    while(x < num){
        y = x;
        p = pow(dig);
        x = x + 9 * p * (dig + 1);
        dig++;
    }
    num = num - y;
    /*cout << "num " << num << endl;
    cout << "dig " << dig << endl;*/
    long count = num / dig;
    if(num % dig != 0)
        count++;
    long res = p + count - 1;
    /*cout << "res " << res << endl;
    cout << "p " << p << endl;*/
    long pos = num % dig;
    //cout << "pos " << pos << endl;
    if(pos == 0)
        pos = dig;
    
    char output = to_string(res)[pos-1];

    return output;
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        long k;
        cin >> k;
        cout << find_digit(k) << endl;
    }

    return 0;
}