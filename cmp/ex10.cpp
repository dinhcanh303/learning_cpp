#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    int abs1 = abs(a.first - a.second);
    int abs2 = abs(b.first - b.second);
    if( abs1 != abs2) return abs1 < abs2;
    if(a.first != b.first) return a.first < b.first;
    return a.second > b.second;
}
int main(){
    int n; cin >> n;
    pair<int,int> a[n];
    for(int i =0 ; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a,a+n,cmp);
    for(pair<int,int> x : a){
        cout << x.first << " " << x.second << endl;
    }
}