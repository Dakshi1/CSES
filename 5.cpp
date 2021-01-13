#include <iostream>
using namespace std;

int main(){

int n;
cin >> n;
if(n == 2 || n == 3){
    cout << "NO SOLUTION" << endl;
    return 0;
}

int count = 0, left=0, right = n/2, value = n;
int arr[n];

while(left < n/2 || right < n){
    if(count % 2 == 0){
        arr[right++] = value--;
    }else{
        arr[left++] = value--;
    }
    count++;
}

for(int i=0;i<n;i++){
    cout << arr[i] << " ";
}
cout << endl;

return 0;
}