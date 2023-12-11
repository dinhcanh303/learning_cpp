#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    ll n; cin >> n;
    for(int i=2; i <= sqrt(n); i++){
        cout << i * i << endl;
    }
    return 0;
}