#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        int x; cin >> a[i];
        mp[a[i]]++;
    };
    int _max = INT_MIN;
    for(auto x : mp) _max = max(_max,x.second);
    for(auto x : mp){
        if(x.second == _max) {
            cout << x.first << " " << x.second << endl;
            break;
        }
    }
    return 0;
}