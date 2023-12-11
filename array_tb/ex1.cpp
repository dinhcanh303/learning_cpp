#include <bits/stdc++.h>

using namespace std;

int sc(int x){
    int cnt = 0;
    while(x){
        if(x % 10 % 2 == 0) cnt++;
        x /= 10;
    }
    return cnt;
}
int sl(int x){
    int cnt = 0;
    while(x){
        if(x % 10 % 2 == 1) cnt++;
        x /= 10;
    }
    return cnt;
}

bool cmp(int a, int b){
    int sc1 = sc(a), sc2 = sc(b);
    if(sc1 != sc2) return sc1 < sc2;
    return  a < b;
}
bool cmp2(int a, int b){
    int sl1 = sl(a), sl2 = sl(b);
    if(sl1 != sl2) return sl1 < sl2;
    return  true;
}
int main(){
    int n; cin >> n;
    int a[n],b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a,a+n,cmp);
    for(int x : a) cout << x << " ";
    cout << endl;
    stable_sort(b,b+n,cmp2);
    for(int x : b) cout << x << " ";
    return 0;
}
