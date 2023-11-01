#include <bits/stdc++.h>

using namespace std;
int main(){
    int a1, a2, a3, b1, b2, b3 , n; cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    int kC = ceil((a1+ a2+ a3)/5);
    int kHc = ceil((b1+ b2+b3)/10);
    cout << kC << " " << kHc << endl;
    if (kC + kHc <= n && kC + kHc != 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}