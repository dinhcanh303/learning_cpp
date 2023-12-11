#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    set<int> se;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        auto it = se.find(a[i]);
        if(it == se.end()){
            cout << a[i] << " " ;
        }
        se.insert(a[i]);
    }
    
    return 0;
}