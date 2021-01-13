#include <iostream>
using namespace std;

int main(){

string s;
cin >> s;
int n = s.length();

int curr_len=1, max_len=1, start=0;
for(int i=1;i<n;i++){
    if(s[start] == s[i])
        curr_len++;
    else{
        max_len=max(max_len, curr_len);
        start=i;
        curr_len=1;
    }
}
max_len=max(max_len, curr_len);
cout << max_len << endl;
return 0;
}