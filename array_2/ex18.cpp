#include <bits/stdc++.h>

using namespace std;
int n,m, a[505][505];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1}; // i
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int _max = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            _max = a[i][j];
            for(int k = 0; k < 8;k++){
                int i1 = i + dx[k], j1 = j + dy[k];
                if((i1 >= 0 && i1 <= n-1) && (j1 >= 0 && j1 <= m-1)){
                    _max = max(_max,a[i1][j1]);
                }
            }
        }
    }
    cout << _max << endl;
    return 0;
}