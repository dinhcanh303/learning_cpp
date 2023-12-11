#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int n,k; cin >> n >> k;
    int a[n];
    int b[n + 1];
    b[0] = 0;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i+1] = (b[i] + a[i]) % k;
    }
    for(int i = 0; i < n; i++){
        if(a[i] == k)
    }
    ll kq = sum % k;
    if(kq == 0) cout << n << endl;
    else {
        ll kq2 = kq % k;
        int position = -1;
        for(int i = 0 ; i < n ; i++){
            if(a[i] == kq2){
                position = i;
                break;
            }
        }
        if(position != -1) cout << n - position -1 << endl;
        else cout << position << endl;
    }
}



