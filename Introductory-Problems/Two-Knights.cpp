#include <iostream>
using namespace std;

long calculate(long n){
    long result, a, b, c, n_sr;
    n_sr = n * n;
    a = n_sr * (n_sr - 1);
    b = 4 * (n - 4) * (n - 4);
    c = 20 * (n-4);
    result = a/2 - b - c - 24;
    return result;
}

int main(){

long n;
cin >> n;
long arr[n+1];
arr[0] = 0;
arr[1] = 0;
arr[2] = 6;
arr[3] = 28;

for(int i=4;i<=n;i++){
    arr[i] = calculate(i);
}

for(int i=1;i<=n;i++){
    cout << arr[i] << endl;
}

return 0;
}