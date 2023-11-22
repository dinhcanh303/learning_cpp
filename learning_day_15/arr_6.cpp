#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    long long n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k; cin >> k;
    int cnt = 0;
    for(int i = 0; i < n -1 ; i++){
        for( int j = i + 1; j < n; j++){
            if(a[i] + a[j] == k) ++cnt;
        }
    }
    cout << cnt << endl;
}