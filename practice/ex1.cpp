#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int a , b;cin >> a >> b;
    int nam = 0;
    while(a <= b){
        a *= 3;
        b *=2;
        nam++;
    }
    cout << nam << endl;
    return 0;
}