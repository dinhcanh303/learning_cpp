#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int d25 = 0 , d50 = 0, d100 = 0;
    for(int x : a){
        if(x == 25) d25++;
        else if(x == 50){
            if(d25 > 0) {
                d50++;
                d25--;
            }else {
                cout << "NO" << endl;
                return 0;
            }
        }else {
            if(d50 > 0 && d25 > 0){
                d100++;
                d50--;
                d25--;
            }else if (d25 > 3) {
                d100++;
                d25 -= 3;
            }else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" <<  endl;
    return 0;
}