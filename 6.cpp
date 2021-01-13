#include <iostream>
using namespace std;

long calculate(long x, long y){
    long result = -1;
    if(x >= y){
        (x % 2 == 0) ? result = x*x - y + 1 : result = x*x -2*x + y + 1;
    }else{
        (y % 2 != 0) ? result = y*y - x + 1 : result = y*y -2*y + x + 1;
    }
    return result;
}

int main(){

int t;
cin >> t;

while(t--){
    long row, column;
    cin >> row >> column;
    cout << calculate(row, column) << endl;
}

return 0;
}