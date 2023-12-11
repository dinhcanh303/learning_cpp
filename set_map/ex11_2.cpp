#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        mp[x] = 1;
    }
    for(int i=0;i<m;i++){
        int x; cin >> x;
        if(mp[x] == 1){
            mp[x] = 2;
        }
    }
    for(auto x : mp){
        if(mp[x] == 1){
            cout << x.first << " ";
        }
    }
    return 0;
}