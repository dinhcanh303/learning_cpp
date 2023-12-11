#include <bits/stdc++.h>

using namespace std;

bool nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}
int main(){
    int n,m; cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<m;j++){
            sum += a[i][j];
        }
        cout << sum << " ";
    }
    for(int i=0;i<m;i++){
        int sum2 = 0;
        for(int j=0;j<n;j++){
            sum2 += a[i][j];
        }
        cout << sum2 << " ";
    }
    cout << endl;

    return 0;
}