#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll recursion(int n){
    if(n == 0) return 1;
    else {
        return n * recursion(n-1);
    }
}
int main(){
    int n; cin >> n;
    cout << recursion(n) << endl;
    return 0;
}