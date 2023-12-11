#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    multimap<int,int> mp;
    // for(int &x : a) {
    //     cin >> x
    //     mp[x]++;
    // };
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[i]++;
        cout << mp[i] << endl;
    }
    // int sum = 0, index = -1, max_val = 0;
    // for(int i = 0; i < n; i++){
    //     sum += a[i];
    //     if(a[i] == 0 && max_val == 0) {
    //         index = i;
    //         max_val = 1;
    //     }
    //     if(sum == 0) {
    //         index = 0;
    //         max_val = i + 1;
    //     }
    //     if(mp.find(sum) != mp.end()){
    //         if(i - mp[sum] > max_val){
    //             index = mp[sum] + 1;
    //             max_val = i - mp[sum];
    //         }
    //     }else mp[sum] = i;
    // }
    // if(max_val == 0){
    //     cout << "NOT FOUND" << endl;
    // }else{
    //     for(int i = index; i < index + max_val; i++){
    //         cout << a[i] << " "
    //     }
    // }
    return 0;
}