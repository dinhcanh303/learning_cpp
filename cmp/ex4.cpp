#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
double kc(pair<int,int> a){
    int x = a.first, y = a.second;
    return sqrt(x * x + y * y);
}
bool cmp(pair<int, int> a, pair<int, int> b){
    double d1 = kc(a) , d2 = kc(b);
    if(d1 != d2) return d1 < d2;
    if(a.first != b.first) return a.first < b.first;
    return a.second < b.second;
}
int main(){
    int n; cin >> n;
    pair<int,int> a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a,a+n,cmp);
    for(pair<int,int> x : a){
        cout << x.first << " " << x.second << endl;
    }
}
