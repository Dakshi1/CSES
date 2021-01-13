#include <iostream>
using namespace std;

int main(){

long n, sum = 0, half_sum = 0, m;
cin >> n;
m = n;
sum = (n * (n+1)) / 2;
if(sum % 2 != 0){
    cout << "NO" << endl;
    return 0;
}else{
    cout << "YES" << endl;
}
int count = 0, start = 1;
while(half_sum != sum/2){
    half_sum += n--;
    count++;
    if(half_sum < sum/2){
        half_sum += start++;
        count++;
    }
}
cout << count << endl;
for(int i=1;i < start;i++){
    cout << i << " ";
}

for(int i=n+1;i <= m;i++){
    cout << i << " ";
}

cout << endl;

cout << (m - count) << endl;

for(int i=start;i<=n;i++){
    cout << i << " ";
}

cout << endl;

return 0;
}