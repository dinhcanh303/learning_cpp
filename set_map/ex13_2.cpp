#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    set<int> se1,se2,se3;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        se1.insert(x);
        se3.insert(x);
    }
    for(int i=0;i<m;i++){
        int x; cin >> x;
        se2.insert(x);
        se3.insert(x);
    }
    for(auto x : se3){
        if(se1.count(x) == 0 || se2.count(x) == 0){
            cout << x << " ";
        }
    }
    return 0;
}