#include <bits/stdc++.h>
using namespace std;

void calc_min_diff(vector<long> &v, int current, long current_sum, long total_sum, long &diff){

    if(current == v.size())
        return;

    
    long part_A = current_sum;
    long part_B = total_sum - current_sum;
    diff = min(diff, abs(part_A - part_B));
    
    calc_min_diff(v, current + 1, current_sum, total_sum, diff);
    calc_min_diff(v, current + 1, current_sum + v[current], total_sum, diff);
}

int main()
{
    long n, sum=0, diff=LONG_MAX;
    cin >> n;
    vector<long> v(n, 0);
    
    for(auto i=0;i<n;i++){
        cin >> v[i];
        sum = sum + v[i];
    }

    calc_min_diff(v, 0, 0, sum, diff);

    cout << diff << endl;

    return 0;
}