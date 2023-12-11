#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int a , b, c; cin >> a >> b >> c;
        int cach = 0;
        for(int i = 0; i <= c; i++){
            int magic = c - i;
            if(i >= a && magic >= b){
                cach++;
            }
        }

    }
    return 0;
}