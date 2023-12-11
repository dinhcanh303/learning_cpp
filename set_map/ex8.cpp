#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    multiset<int> mp;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        mp.insert(x);
    }
    int q; cin >> q;
    while(q--){
        int tt,x; cin >> tt;
        if(tt == 1){
            cin >> x;
            mp.insert(x)
        }else if(tt == 2){
            cin >> x;
            mp.erase(x);
        }else if(tt == 3){
            cout << mp.begin() << endl;
        }else cout << mp.rbegin << endl;
    }
    return 0;
}
