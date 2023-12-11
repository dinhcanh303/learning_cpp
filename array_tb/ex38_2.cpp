#include <bits/stdc++.h>

using namespace std;
int prime[1000001];
void sang(){
    for(int i = 0; i < 1000000; i++) prime[i] = 1;
    prime[0] = prime[1] = 0;
    for(int i = 2; i < 1000; i++){
        if(prime[i]){
            for(int j = i * i; j < 1000000; j +=i){
                prime[j] = 0;
            }
        }
    }

}
int sum[1000001];
void cd(){
    for(int i = 1; i < 1000000; i++){
        sum[i] = sum[i-1] + prime[i];
    }
}
int main(){
    sang();
    cd();
    // for(int x : sum) cout << x << " ";
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        if(sum[l] == 0 || (prime[r] != 1 && prime[l] !=1) || (prime[r] == 1 && prime[l] != 1)){
            cout << sum[r] - sum[l] << endl;
        }else
            cout << sum[r] - sum[l] + 1 << endl;
    }
    return 0;

}