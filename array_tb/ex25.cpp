#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x; cin >> n >> x;
    int a[n];
    int cnt[3] = {0}
    for(int i=0;i<n;i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    for(int i=0; i < cnt[0]; i++) cout << "0" << " ";
    for(int i=0; i < cnt[1]; i++) cout << "1" << " ";
    for(int i=0; i < cnt[2]; i++) cout << "2" << " ";
    return 0;
}