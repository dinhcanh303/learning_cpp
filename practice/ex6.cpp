#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n ;
    int chan = 0;
    int le = 0;
    while(cin >> n){
        if(n % 2 == 0) chan++;
        else le++;
    }
    if(chan > le) cout << "CHAN" << endl;
    else if(chan < le) cout << "LE" << endl;
    else cout << "CHANLE" << endl;
    return 0;
}