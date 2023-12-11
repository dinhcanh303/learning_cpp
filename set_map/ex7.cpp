#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    set<int> se;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    int q; cin >> q;
    while(q--){
        int a,b; cin >> a;
        switch (a)
        {
        case 1:
            cin >> b;
            se.insert(b);
            break;
        case 2:
            cin >> b;
            if(se.count(b)) se.erase(b);
            break;
        case 3:
            
            break;
        
        default:
            break;
        }
    }
    return 0;
}