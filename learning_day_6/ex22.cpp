#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n , m  ; cin >> n >> m;
    int min = (n + 1 ) /2 ;
    int max = n;
    int k = 1ll *  (min + m -1) * m / m ;
    if(k >= min  && k <= max){
        cout << k << endl;
    }else {
        cout << -1 << endl;
    }
    return 0;
}