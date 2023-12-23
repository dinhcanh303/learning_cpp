#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    map<string,int> mp;
    vector<string> ve;
    while(cin >> s){
        mp[s]++;
        if(mp[s] == 1) ve.push_back(s);
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for(string s : ve){
        cout << s << " " << mp[s] << endl;
    }
    return 0;
}