#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n == 1) {
        cout << a[0] << endl;
        return 0;
    }
    int min_value = INT_MAX;
    for (int i = 0; i < n - 1; i++){
        min_value = min(min_value,abs(a[i] - a[i+1]));
    }
    cout << min_value << endl;
}