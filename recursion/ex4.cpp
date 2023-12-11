#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll recursion(int n){
    if(n == 1) return -1;
    else {
        ll x = pow(-1,n) * n;
        return x + recursion(n-1);
    }
}
int main(){
    int n; cin >> n;
    cout << recursion(n) << endl;
    return 0;
}