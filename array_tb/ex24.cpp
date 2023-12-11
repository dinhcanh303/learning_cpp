#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x; cin >> n >> x;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int first = -1;
    int last = -1;
    for (int i = 0; i < n; ++i) {
        if (a[i] == x) {
            if (first == -1) {
                first = i + 1;
            }  
            last = i + 1;
        }
    }
    if (first != -1) {
        cout << first << " " << last << endl;
    } else {
        cout << "-1 -1" << endl;
    }
    
    return 0;
}