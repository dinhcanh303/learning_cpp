#include <bits/stdc++.h>

using namespace std;

void ham(long long n){
    int num = 0;
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            num = i;
            while(n % i == 0){
                ++cnt;
                n /= i;
            }
        }
        if(num != 0){
            cout << num << " " << cnt << endl;
            return;
        }
    }
    if(n > 1) {
        cout << n << " " << 1 << endl;
        return;
    };
}

int main(){
    long long n; cin >> n;
    ham(n);
    return 0;
}