#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    multiset<int> se;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    int q; cin >> q;
    while(q--){
        int a,b; cin >> a >> b;
        switch (a)
        {
        case 1:
            se.insert(b);
            break;
        case 2:
            auto it = se.find(b);
            if(it != se.end()){
                se.erase(it);
            }
            break;
        default:
            (se.find(b) == se.end()) ? cout << "NO" << endl : cout << "YES" << endl;
            break;
        }
    }
    return 0;
}