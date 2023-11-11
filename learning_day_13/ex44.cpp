#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    long long sum = 0;
    long long sum2 = 0;
    long long sum3 = 0;
    int count3 = 0;
    while (n--){
        sum = sum + n;
        cout << n << endl;
        cout << sum << endl;
        sum2 += 1ll * n * n;
        if(n % 3 == 0) {
            ++count3;
            sum3 += n;
        }
    }
    cout << sum << endl;
    cout << sum2 << endl;
    cout << count3 << endl;
    cout << sum3 << endl;
    return 0;
}