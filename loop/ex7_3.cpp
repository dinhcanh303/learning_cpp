#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll n; cin >> n;
    ll sum = 0;
    for(ll i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            ll j = n / i;
            if(i != j) sum += i + j;
            else sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}