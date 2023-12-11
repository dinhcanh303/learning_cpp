#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll recursion(int n){
    if(n == 0) return 0;
    else {
        return n * n * n + recursion(n-1);
    }
}
int main(){
    int n; cin >> n;
    cout << recursion(n) << endl;
    return 0;
}