#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    set<int> se,se1;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        se.insert(x);
    }
    for(int i=0;i<m;i++){
        int x; cin >> x;
        se1.insert(x);
    }
    for(auto x : se){
        if(se1.count(x) == 0){
            cout << x << " ";
        }
    }
    return 0;
}