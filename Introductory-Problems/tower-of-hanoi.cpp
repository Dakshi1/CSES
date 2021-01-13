#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n, int from, int to, int helper, vector<vector<int> > &v){

    if(n == 1){
        vector<int> v1(2, 0);
        v1[0]=from;v1[1]=to;
        v.push_back(v1);
        return;
    }
    tower_of_hanoi(n-1, from, helper, to, v);
    vector<int> v1(2, 0);
    v1[0]=from;v1[1]=to;
    v.push_back(v1);
    tower_of_hanoi(n-1, helper, to, from, v);
}

int main()
{
    long n;
    cin >> n;
    vector<vector<int> > v;

    tower_of_hanoi(n, 1, 3, 2, v);
    cout << v.size() << endl;
    for(int i=0;i<v.size();i++){
        cout << v[i][0] << " " << v[i][1] << endl;
    }

    return 0;
}