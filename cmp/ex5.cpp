#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
bool cmp(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b) {
    if(a.first != b.first) return a.first < b.first;
    if(a.second.first != b.second.first) return a.second.first < b.second.first
    return a.second.second < b.second.second
}
int main(){
    int n; cin >> n;
    pair<int,pair<int,int>> a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].first >> a[i].second.first >> a[i].second.second;
    }
    sort(a,a+n,cmp);
    for(pair<int,pair<int,int>> x : a){
        cout << x.first << " " << x.second.first << " " << x.second.second << endl;
    }
    return 0;
}
