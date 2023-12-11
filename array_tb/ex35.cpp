#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n);
    long long cnt = 1;
    int max_val = 1;
    for(int i = 1; i < n; i++){
        if(a[i] -a[i-cnt] <= k){
            cnt++;
            max_val = max(max_val,cnt);
        }else cnt = 1;
    }
    cout << max_val << endl;
}