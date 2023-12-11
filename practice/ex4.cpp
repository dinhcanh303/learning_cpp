#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}
int main(){
    int t; cin >> t;
    while(t--){
        int x,y; cin >> x >> y;
        int next = x + 1;
        while(!nt(next)){
            next++;
        }
        if(next == y) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}