#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll F[100];

bool check(ll n){
    for(int i = 0; i <= 92;i++){
        if(n == F[i]) return true;
    }
    return false;
}
int main(){
    long long n; cin >> n;
    F[1] = 1;
    F[2] = 1;
    for(int i = 3 ; i <= 92; i++){
        F[i] = F[i-1] + F[i-2];
    }
    for(int i = 1; i <= n; i++){
        if(F[i] >= n) {
            cout << F[i] << endl;
            return 0;
        } 
    }
    return 0;
}