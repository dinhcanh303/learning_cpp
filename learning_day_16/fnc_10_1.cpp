#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return i;
    }
    return n;
}
int prime(100001)
void sang(){
    for(int i = 1; i <= 100000; i++){
        prime[i] = i;
    }
    for(int i = 2; i <= sqrt(100000); i++){
        if(prime[i] == i){
            for(int j = i * i; j <= 100000; j += i){
                if(prime[j] == i) prime[j] = i;
            }
        }
    }
}
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        cout << nt(i) << endl;
    }
    return 0;
}