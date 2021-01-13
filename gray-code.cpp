#include <bits/stdc++.h>
using namespace std;

vector<string> append_char(vector<string> v, string s){

    for(int i=0;i<v.size();i++){
        v[i]=s+v[i];
    }
    return v;
}
vector<string> merge_vectors(vector<string> v1, vector<string> v2){

    int l1= v1.size(), l2= v2.size();
    int len = l1 + l2;
    vector<string> v(len, "");

    for(int i=0;i<l1;i++){
        v[i] = v1[i];
    }

    for(int i=0;i<l2;i++){
        v[l1+i] = v2[i];
    }

    return v;
}

int main()
{
    long n;
    cin >> n;
    
    vector<string> v(2);
    v[0] = "0"; v[1] = "1";

    while(n > 1){
        vector<string> v1 = append_char(v, "0");
        reverse(v.begin(), v.end());
        vector<string> v2 = append_char(v, "1");
        v = merge_vectors(v1, v2);
        n--;
    }

    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }

    return 0;
}