#include <bits/stdc++.h>

using namespace std;

int reverse(int n){
    int tmp = 0;
    while(n !=0 ){
        tmp = tmp * 10 + n % 10;
        n /= 10;
    }
    return tmp;
}
bool include6AndSum8(int n){
    int is6 = false;
    int ans = 0;
    while(n !=0 ){
        if(n % 10 == 6) is6 = true;
        ans +=  n % 10;
        n /= 10;
    }
    // if(is6 && (ans %10 == 8)) return true;
    // else return false;
    return is6 && (ans % 10 == 8);
}


int main() {
    int a,b; cin >> a >> b;
    for(int i = a ; i <= b ; i++ ){
        if(reverse(i) == i && include6AndSum8(i)) cout << i << " ";
    }
    cout << endl;
    return 0;
}