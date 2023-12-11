#include <bits/stdc++.h>

using namespace std;

int sl(int a){
    int cnt = 0;
    while(a){
        int r = a % 10;
        if(r == 2 || r == 3 || r == 5 || r == 7) cnt++;
        a /= 10;
    }
    return cnt;
}
bool cmp(int a, int b) {
    int sl1 = sl(a), sl2 = sl(b);
    return sl2 < sl1;

}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    stable_sort(a, a+n,cmp);
    for(int x : a) cout << x << " ";
    return 0;
}
