#include <iostream>
#include <vector>
using namespace std;

string getString(char c, int i) 
{
    string s(i, c);  
    return s;    
} 

string check(string s){
    int len = s.length();

    vector<int> v(26, 0);
    for(int i=0; i<len; i++){
        v[s[i] - 'A']++;
    }

    string res1 = "", res2 = "", extra = "";
    int count = 0;
    for(int i=0; i<26; i++){
        if(v[i] == 0)
            continue;

        char c = 'A' + i;
        
        if(v[i] % 2 != 0){
            count++;
            if(count > 1)
                return "NO SOLUTION";
            extra = getString(c, v[i]);
            continue;
        }
        
        res1 = res1 + getString(c, v[i]/2);
        res2 =  getString(c, v[i]/2) + res2;
    }
    
    string res = res1 + extra + res2;
    return res;
}

int main()
{
    string s;
    cin >> s;
    
    cout << check(s) << endl;

    return 0;
}