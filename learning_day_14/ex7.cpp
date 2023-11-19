#include <bits/stdc++.h>

using namespace std;
int main(){
    int n ; cin >> n;
    long long sum = 0;
    for(int i=1; i<=sqrt(n); i++){
        if ( n % i == 0) sum += i;
    }
    cout << sum << endl;
    return 0;
}