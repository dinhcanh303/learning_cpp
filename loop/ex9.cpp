#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    int n; cin >> n;
    ll res = 1;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            res *= i;
            if(i != n/i){
                res *= n/i;
            }
        }
    }
    cout << res << endl;
    return 0;
}