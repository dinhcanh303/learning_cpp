#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int max = a[0];
    cout << max << " ";
    for(int i = 1; i < n; i++){
        if(max >= a[i]) {
            cout << a[i] << " ";
            max = a[i];
        }
    }
    return 0;
}