#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    long long n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int minValue = INT_MAX;
    for(int i = 0; i < n; i++){
        minValue = min(minValue, a[i]);
    }
    cout << minValue << endl;
}