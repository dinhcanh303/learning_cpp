#include <bits/stdc++.h>

using namespace std;

int usntkn(long long n){
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            ++cnt;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1) cnt++;
    return cnt;
}

int main(){
    long long n; cin >> n;
    cout << usntkn(n) << endl;
    return 0;
}