#include <bits/stdc++.h>
using namespace std;
using ll = long long;


bool nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}

int main(){
    int n; cin >> n;
    while(n--){
        int a; cin >> a;
        if(nt(a)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
   
    return 0;
}