#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,X; cin >> n >> X;
    int a[n];
    for(int &x : a) cin >> x;
    auto it = lower_bound(a,a+n,X);
    auto it2 = upper_bound(a,a+n,X);
    (it == a + n) ? cout << -1 << endl : cout << (it -a) << endl;
    (it2 == a + n) ? cout << -1 << endl : cout << (it2 -a) << endl;
    (*it == X) ?  cout << (it -a) << endl: cout << -1 << endl ;
    it2--;
    (*it2 == X) ? cout << (it2 -a) << endl : cout << -1 << endl;
    cout << (it2-a) - (it -a) + 1 << endl;
    return 0;
}