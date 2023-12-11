#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int X;
bool cmp(int a, int b){
    int abs1 = abs(a - X);
    int abs2 = abs(b - X);
    if(abs1 != abs2) return abs1 < abs2;
    return a < b;
}
bool cmp2(int a, int b){
    if(a % 2 == 0 && b % 2 == 1) return true;
    if(a % 2 == 1 && b % 2 == 0) return false;
    if(a % 2 == 0 && b % 2 == 0) return a < b;
    return a > b;
}
int main(){
    int n; cin >> n >> X;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a,a+n,cmp);
    for(int x : a) cout << x << " ";
    cout << endl;
    sort(a,a+n,cmp2);
    for(int x : a) cout << x << " ";
}