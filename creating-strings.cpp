#include <bits/stdc++.h>
using namespace std;

void creating_strings(string original, string current, set<string> &variations){

    if(original.size() == 1){
        string output = current+original;
        //cout << "output " << output << endl;
        variations.insert(output);
        return;
    }
    
    for(int i=0;i<original.size();i++){
        string temp_original = original;
        string temp_current = current + string(1, original[i]);
        if(i == 0){
            temp_original = original.substr(1);
        }else if(i < original.size() - 1){
            temp_original = original.substr(0, i) + original.substr(i+1);
        }else{
            temp_original = original.substr(0, i);
        }
        //cout << temp_original << " temp_original " << endl;
        //cout << temp_current << " temp_current " << endl;
        creating_strings(temp_original, temp_current, variations);
    }
}

int main()
{
    string s;
    cin >> s;
    set<string> variations;

    creating_strings(s, "", variations);
    cout << variations.size() << endl;
    for(auto i=variations.begin();i !=variations.end();i++){
        cout << *i << endl;
    }

    return 0;
}