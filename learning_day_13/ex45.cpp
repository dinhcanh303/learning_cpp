#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    long long m = n;
    while (n >= 10){
        long long sum = 0, m = n;
        while (m != 0)
        {
            sum += m % 10;
            m /= 10;
        }
        n = sum;
    }
    cout << n << endl;
    return 0;
}