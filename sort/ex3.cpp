#include <bits/stdc++.h>

using namespace std;
int sl(int a){
    int ans = 0;
    while(a){
        ans += a % 10;
        a /= 10;
    }
    return ans;
}
bool cmp(int a, int b) {
    if(sl(a) != sl(b)) return sl(a) < sl(b);
    return a < b;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n,cmp);
    for(int x : a) cout << x << " ";
    return 0;
}