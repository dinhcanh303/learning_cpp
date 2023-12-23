#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    int a[n],b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    int l = 0, r = 0;
    int c[n+m]
    for(int i = 0; i < n; i++){
        if(a[l] > b[r]){
            c[i] = b[r];
            r++;
        }else{
            c[i] = a[l];
            l++;
        }
    }
    for(int i = r; i < m; i++){
        c[i] = b[i];
    }
    for(int i = 0; i < n + m; i++){
        cout << c[i] << " ";
    }
    return 0;
}