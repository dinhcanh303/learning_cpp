#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if(a.second != b.second) return a.second < b.second;
    return a.first > b.first;
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
    return 0;
}
