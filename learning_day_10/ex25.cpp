#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    int sum = n / 100; 
    n %= 100;
    sum += n / 20;
    n %= 20;
    sum += n / 10;
    n %= 10;
    sum += n / 5;
    n %= 5;
    sum += n / 1;
    cout << sum << endl;
    return 0;
}