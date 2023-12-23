#include <bits/stdc++.h>

using namespace std;
int n; a[505];
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int sum_max = 0;
    for(int i = 1; i < n-2; i++){
        for(int j = 1; j < n-2; j++){
            int sum = a[i][j];

            for(int k = 0; k < 8;k++){
                int i1 = i + dx[k], j1 = j + dy[k];
                sum += a[i1][j1];
            }
            sum_max = max(sum_max, sum);
        }
    }
    cout << sum_max << endl;
    return 0;
}