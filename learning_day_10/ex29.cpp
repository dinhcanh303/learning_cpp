#include <bits/stdc++.h>

using namespace std;
int main(){
    int a , b , c , d ; cin >> a >> b >> c >> d;
    int cb = b /a ;
    if ( cb * b == c && cb * c == d){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
    return 0;
}