#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
   
    cout << n + n * (n -1)/2 << endl;
    cout << n * (n + 1) * (2*n + 1)/6 << endl;
    cout << n/3 << endl;
    cout << (n/3) * 3 + (n/3) * (n/3 -1) * 3/2 << endl;
    return 0;
}