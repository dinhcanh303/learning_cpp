#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++){
        int min_val, max_val;
        if(i == 0){
            min_val = abs(a[i]-a[i+1]);
            max_val = abs(a[i]-a[n-1]);
        }else{
            min_val = min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]));
            max_val = max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
        }
        cout << min_val << " " << max_val << endl;
    }
    return 0;
}