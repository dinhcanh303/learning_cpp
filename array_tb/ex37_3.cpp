#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int n,k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    unordered_map<int, int> mp;
    int sum = 0, max_length = -1;
    mp[0] = -1;
    for(int i = 0; i < n; i++){
        sum = (sum + a[i]) % k;
        if(mp.find(sum) != mp.end()){
            int l = i - mp[sum];
            if(l > max_length){
                max_length = l;
            }
        }else mp[sum] = i;
    }
    cout << max_length << endl;
    return 0;
}



