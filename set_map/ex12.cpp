#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    set<int> se1,se2,se3;
    int a[n], b[m];
    for(int i=0;i<n;i++){
        cin >> a[i];
        se1.insert(a[i]);
        se3.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
        se2.insert(b[i]);
        se3.insert(b[i]);
    }
    for(int x : se3){
        if(se1.count(x) == 0 || se2.count(x) == 0){
            cout << x << " ";
        }
    }
    return 0;
}