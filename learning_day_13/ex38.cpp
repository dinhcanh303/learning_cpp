#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    char kitu;
    int ansC = 0;
    int ansPlus = 0;
    while(n--){
        cin >> kitu;
        if(kitu == 'C') ++ansC;
        else if (kitu == '+') ++ansPlus;
    }
    if(ansC >= 1 && ansPlus >=2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}