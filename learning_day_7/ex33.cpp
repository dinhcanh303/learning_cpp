#include <bits/stdc++.h>
using namespace std;

int main(){
    int a  , b ,c , n ; cin >> a >> b >> c >> n;
    int sum = a + b + c + n;
    if(sum % 3 == 0){
        int ans = sum / 3;
        if(ans >= a && ans >= b && ans >= c) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}