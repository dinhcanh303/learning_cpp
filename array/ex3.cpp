#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int minValue = INT_MAX , cnt = 0;
    for(int i = 0; i < n; i++){
        if(x == minValue) cnt++;
        else if(x < minValue){
            minValue = x;
            cnt = 1;
        }
    }
    cout << cnt << endl;
}