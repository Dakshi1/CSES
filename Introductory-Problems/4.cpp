#include <iostream>
using namespace std;

int main(){

int n;
cin >> n;
long arr[n];
long curr_max=0, steps=0;

for(int i=0;i<n;i++){
    cin >> arr[i];
    arr[i] > curr_max ? curr_max = arr[i] : steps += curr_max - arr[i];
}

cout << steps << endl;

return 0;
}