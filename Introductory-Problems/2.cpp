#include <iostream>
using namespace std;

int main(){

long n;
cin >> n;
long arr[n-1];
long sum = (n*(n+1))/2;
for(int i=0;i<n-1;i++){
    cin >> arr[i];
    sum = sum - arr[i];
}
cout << sum ;
return 0;
}