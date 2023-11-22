#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    long long sum = 0;
    for(int i = 1; i <= n; i++){
        sum += 2 * i;
    }
    cout << sum << endl;
    return 0;
}