#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    int n; cin >> n;
    if(n == 1) cout << -1;
    else if(n % 2 == 0){
        cout << n / 2 << endl;
        for(int i = 0 ; i < n /2 ; i++){
            cout << 2 << " ";
        }
    }else{
        int d3 = 1;
        int d2 = (n - 3) / 2;
        cout << d2 + d3 << endl;
        for(int i = 0 ; i < d2 ; i++){
            cout << 2 << " ";
        }
        cout << 3  << endl;
    }
    
    return 0;
}