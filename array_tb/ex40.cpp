#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    int a[n],b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int i = 0 , j = 0;
    while(i < n && b < m){
        if(a[i] == b[j]) j++;
        i++;
    }
    if(j == m) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}