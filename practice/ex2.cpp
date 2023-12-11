#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int findMin(int n){
    int min_val = INT_MAX;
    for(int i = 1 ; i <= n; i++){
        if(n % i == 0){
            int a = n / i;
            int b = 2 * (i + a);
            min_val = min(min_val,b);
        }
    }
    return min_val;
}
int main(){
    int n; cin >> n;
    cout << findMin(n) << endl;
}