#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a,b,k; cin>> a >> b >> k;
    if( k % 2 == 0 ){
        cout << 1ll * (a-b) * (k/2) << endl;
    }else{
        cout << 1ll * (a-b) * (k/2) + a << endl;
    }
    return 0;
}