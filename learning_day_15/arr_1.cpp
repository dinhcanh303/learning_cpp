#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool snt(int n){
    for(int i = 2 ; n <= sqrt(n); n++){
        if(n % i == 0) return false;
    }
    return n > 1;
}

int main(){
    long long n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
           if(snt(a[i])) {
                ++cnt;
                sum += a[i];
           }
    }
    cout << fixed << setprecision(3) << (double) sum / cnt << endl;
    
}