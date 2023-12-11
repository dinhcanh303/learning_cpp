#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int n,k; cin >> n >> k;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    sort(a.begin(),a.end(),greater<int>());
    ll diff = 0;
    for(int i = 0; i < k; i++) diff += a[i];
    for(int i = k; i < n; i++) diff -= a[i];
    cout << diff << endl;
    
    return 0;
}