#include <bits/stdc++.h>

using namespace std;


bool nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int sum = 0;
    int cnt = 0;
    for(int i=0; i < n; i++){
        if(nt(a[i])){
            ++cnt;
            sum += a[i];
        }
    }
    cout << fixed << setprecision(3) << sum * 1.0 / cnt << endl;
}