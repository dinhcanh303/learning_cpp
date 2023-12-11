#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    set<int> se1;
    set<int> se2;
    int a[n], b[m];
    for(int i=0;i<n;i++){
        cin >> a[i];
        se1.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
        se2.insert(b[i]);
    }
    for(int i = 0; i < n; i++){
        if(se1.count(a[i]) && se2.count(b[i])){
            cout << a[i] << " ";
            se1.erase(a[i]);
        }
    }
    return 0;
}