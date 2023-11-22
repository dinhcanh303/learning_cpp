#include <bits/stdc++.h>
using namespace std;

int snt(int n) {
    for(int i =2 ; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}
int sum(int n){
    int sum = 0;
    while(n !=0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int sumEven(int n){
    int sumEven = 0;
    while(n != 0){
        int r = n % 10;
        if(r % 2 == 0) sumEven += r;
        n /= 10;
    }
    return sumEven;
}
int sumNt(int n){
    int sumNt = 0;
    while(n != 0){
        int r = n % 10;
        if(r == 2 || r == 3 || r == 5 || r == 7) sumNt +=r;
        n /= 10;
    }
    return sumNt;
}
int reverse(int n){
    int ans = 0;
    while(n != 0){
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}
int ham6(int n){
    int cnt = 0;
    for(int i = 2; i <= sqrt(n);i++){
        if(n % i == 0){
            ++cnt;
            while(n % i == 0){
                n /=i;
            }
        }
    }
    if(n > 1) ++cnt;
    return cnt;
}
int ham7(int n){
    int ans = 0;
    for(int i=2; i<=sqrt(n);i++){
        if(n % i == 0){
            ans = i;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1) ans = n ;
    return ans;
}
int ham8(int n){
    while(n != 0){
        if( n % 10 == 6) return 1;
        n /= 10;
    }
    return 0;
}
int ham9(int n){
    return sum(n) % 8 == 0;
}
long long gt(int n){
    long long res = 1;
    for(int i = 1; i <=n; i++){
        res *= i;
    }
    return res;
}
long long ham10(int n){
    long long sum = 0;
    while(n){
        sum += gt(n % 10);
        n /= 10;
    }
    return sum;
}
int ham11(int n){
    int r = n % 10;
    n /=10;
    while(n){
        if(n % 10 != r) return 0;
        n /= 10;
    }
    return 1;
}
int ham12(int n){
    int r = n % 10;
    while(n){
        if(n % 10 > r) return 0;
        n /= 10;
    }
    return 1;
}
int coutNumber(int n){
    int cnt = 0;
    while(n){
        ++cnt;
        n /= 10;
    }
    return cnt;
}
long long  ham13(int n){
    int cnt = coutNumber(n);
    long long sum = 0;
    while(n){
        int tmp = n % 10;
        sum += pow(tmp, cnt);
        n /= 10;
    }
    return sum;
}



int main(){
    int n; cin >> n;
    cout << snt(n) << endl;
    cout << sum(n) << endl;
    cout << sumEven(n) << endl;
    cout << sumNt(n) << endl;
    cout << reverse(n) << endl;
    cout << ham6(n) << endl;
    cout << ham7(n) << endl;
    cout << ham8(n) << endl;
    cout << ham9(n) << endl;
    cout << ham10(n) << endl;
    cout << ham11(n) << endl;
    cout << ham12(n) << endl;
    cout << ham13(n) << endl;
    return 0;
}