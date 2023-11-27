#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int ham1(ll n){
    if(n == 0) return 1;
    int cnt = 0;
    while(n){
        if(n % 2 == 0 ) ++cnt;
        n /= 10;
    }
    return cnt % 2 == 1;
}
int ham2(ll n){
    if(n == 0) return 1;
    int even = 0, odd = 0;
    while(n){
        if(n % 2 == 0) ++even;
        else ++odd;
        n /= 10;
    }
    return even > odd;
}
int ham3(ll n){
    int lastDigit = n % 10;
    n /= 10;
    while(n >= 10){
        n /= 10;
    }
    return n == lastDigit;
}
int ham4(ll n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum % 10 == 8;
}
bool nt(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}
int ham5(ll n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return nt(sum);
}
int ham6(ll n){
    while(n >=10){
        if(abs(n % 10 - (n/10) % 10) != 1) return 0;
        n /= 10;
    }
    return 1;
}
int ham7(ll n){
    int max_value = n % 10;
    while(n >= 10){
        if(max_value < n % 10) max_value = n % 10;
        n /= 10;
    }
    return n > max_value;
}
bool fibo(ll  n){
    if(n == 0 || n == 1) return true;
    ll fn1 = 0, fn2 = 1;
    for(int i = 2; i <= 92; i++){
        ll fn = fn1 + fn2;
        if(fn == n) return true;
        fn1 = fn2;
        fn2 = fn;
    }
    return false;
}
int ham8(ll n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return fibo(sum);
}
bool rev(int n){
    int tmp = n;
    int ans = 0;
    while(n){
        ans = ans * 10 + (n % 10);
        n /= 10;
    }
    return ans == tmp;
}
int ham9(ll n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return rev(sum);
}

int ham10(ll n){
    while(n){
        int r = n % 10;
        if(r != 0 && r != 6 && r != 8) return 0;
        n /= 10;
    }
    return 1;
}


int main(){
int t; cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << ham1(n) << endl;
        cout << ham2(n) << endl;
        cout << ham3(n) << endl;
        cout << ham4(n) << endl;
        cout << ham5(n) << endl;
        cout << ham6(n) << endl;
        cout << ham7(n) << endl;
        cout << ham8(n) << endl;
        cout << ham9(n) << endl;
        cout << ham10(n) << endl;
        cout << endl;
    }
    return 0;
}