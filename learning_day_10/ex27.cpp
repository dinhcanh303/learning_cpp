#include <bits/stdc++.h>

using namespace std;
int main(){
    double n ; cin >> n;
    if(n - (int)n >= 0.5) cout << (int)n +1 << endl;
    else cout << (int)n << endl;
    return 0;
}