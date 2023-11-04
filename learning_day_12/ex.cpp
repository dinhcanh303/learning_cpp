#include <bits/stdc++.h>

using namespace std;
bool nt(int n) {
    if(n < 0) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n%i == 0) return false;
    }
    return true;
}
bool cp (long long n){
    int can = sqrt(n);
    if(1ll * can * can == n) return true;
    else return false;
}
int reverse(int n){
    int tmp = 0;
    while(n !=0 ){
        tmp = tmp * 10 + n % 10;
        n /= 10;
    }
    return tmp;
}
int solve(int n){
    int cnt = 0, m = n;
    while(n != 0){
        ++cnt; n /= 10;
    }
    m %= (int)pow(10, cnt - 1);
    m /= 10; 
    return m;
}

int solve2(int n){
    n /= 10; // mat chu so hang don vi
    int tmp = 0;
    while(n >= 10){
        tmp = tmp * 10 + n % 10;
        n /= 10;
    }
}
int gcd(int a , int b){
    while(b !=0 ){
        int r = a % b;
        a = b ;
        b =r ;
    }
    return a;
}
int lcm(int a, int b){
    return a * b / gcd(a,b);
}

int main() {
    cout << 0 % 100 << endl;
    return 0;
}