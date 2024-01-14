#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    priority_queue<ll> q;
    int n; cin >> n;
    for(int i = 0; i < n;i++){
        int x; cin >> x;
        q.push(x);
    }
    ll ans = 0;
    while(q.size() > 1){
        ll top1 = q.top();
        q.pop();
        ll top2 = q.top();
        q.pop();
        ans += top1 + top2;
        q.push(top1+top2);
    }
    cout << ans << endl;
    return 0;
}