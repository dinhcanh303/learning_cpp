#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve(int n){
    for(int i = 3; i <= sqrt(n); i++){
        if(n % i == 0) {
            cout << i << " " << n - i << endl;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n >  1) cout << n << " " << 0 << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        solve(n);
    }
    return 0;
}