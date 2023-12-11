#include <bits/stdc++.h>

using namespace std;

int sl(int a){
    int cnt = 0;
    while(a){
        if(a % 10 % 2 ==1) cnt++;
        a /= 10;
    }
    return cnt;
}
bool cmp(int a, int b) {
    int sl1 = sl(a), sl2 = sl(b);
    if(sl1 != sl2) return sl2 < sl1;
    return a < b;

}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a+n,cmp);
    for(int x : a) cout << x << " ";
    return 0;
}
