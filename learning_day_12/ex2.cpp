#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n; cin >> n;
     while(n !=0 ){
        int tmp = n % 10;
        if(tmp != 6 || tmp != 8 || tmp != 0){
            return 0;
        }
        n /= 10;
    }
    cout << 1 << endl;
    return 0;
}