#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    multiset<int> se;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    int q; cin >> q;
    while(q--){
        int tt,x; cin >> tt >> x;
        if(tt == 1){
            se.insert(x);
        }else if (tt == 2){
            auto it = se.find(x);
            if(it != se.end()) se.erase(it);
        }else if (tt == 3){
            auto it = upper_bound(se.begin(),se.end(),x);
            it--;
            if(*it == x) cout << *it << endl;
            else cout << -1 << endl;
        }else {
            auto it = lower_bound(se.begin(),se.end(),x);
            if(*it == x) cout << *it << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}
