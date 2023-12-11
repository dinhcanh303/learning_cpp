#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    set<int> se;
    while(n--){
        int x; cin >> x;
        se.insert(x);
    }
    int q; cin >> q;
    while(q--){
        int x1; cin >> x1;
        if(se.find(x1) == se.end()) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}