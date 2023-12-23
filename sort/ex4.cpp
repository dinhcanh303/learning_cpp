#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n);
    int _min = INT_MAX;
    for(int i = 1; i < n -1; i++){
        _min = min(_min,a[i] - a[i-1]);
    }
    cout << _min << endl;
    return 0;
}