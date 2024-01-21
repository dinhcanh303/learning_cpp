#include <bits/stdc++.h>

using namespace std;

int main(){
    queue<int> q;
    int t; cin >> t;
    while(t--){
        int tt; cin >> tt;
        if(tt== 1) cout << q.size() << endl;
        else if(tt== 2) cout << (q.empty() ? "YES" : "NO") << endl;
        else if(tt == 3){
            int x; cin >> x;
            q.push(x);
        }else if(tt== 4){
            if(!q.empty()) q.pop();
        }else if(tt== 5){
            if(q.empty()) cout << -1 << endl;
            else cout << q.front() << endl;
        }else {
            if(q.empty()) cout << -1 << endl;
            else cout << q.back() << end;
        }
    }
    return 0;
}