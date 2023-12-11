#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int n,k; cin >> n >> k;
    int a[n];
    int b[n+1];
    b[0] = 0;
    multiset<int> se;
    int max_length = -1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i+1] = (b[i] + a[i]) % k;
    }
    for(int i = 0; i < n; i++){
        if(se.count(b[i]) > 0) max_length = max(max_length, i - se[b[i]]);
        else se[b[i]] = i;
    }
    cout << max_length << endl;
    return 0;
}



