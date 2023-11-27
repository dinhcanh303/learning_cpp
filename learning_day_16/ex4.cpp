#include <bits/stdc++.h>
using namespace std;
using ll = long long;


bool nt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}
bool csnt(int n){
    while(n--){
        int r = n % 10;
        if(r != 2 && r != 3 && r != 5 && r != 7) return false;
        n /= 10;
    }
    return true;
}

int main(){
    int a,b; cin >> a >> b;
    int dem = 0;
    for(int i = a; i <= b; i++){
        if(csnt(i) && nt(i)) ++dem;
    }
    cout << dem << endl;
   
    return 0;
}