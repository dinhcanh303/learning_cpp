#include <bits/stdc++.h>


using namespace std;

int main(){
    string s;
    getline(cin,s);
    map<char,int> mp;
    for(char c : s){
        mp[x]++;
    }
    int _max = 0; _min = INT_MAX;
    char res1, res2;
    for(auto x : mp){
        if(mp[x] != 0 && mp[x] > _max){
            _max = x.second;
            res1 = x.first;
        }
        if(mp[x] < _min){
            _min = x.second;
            res2 = x.first;
        }
    }
    cout << res1 << " " << _max << endl;
    cout << res1 << " " << _min << endl;
    return 0;
}