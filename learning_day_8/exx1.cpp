#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int x;
    int ok = 0;
    for(int i=0; i<=n; i++){
        cin >> x;
        if(x == 2022) ok = 1;
        else ok = 0;
    } 
    cout << ok;
}