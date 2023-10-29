#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a , b, n ; cin >> a >> b >> n;
    for(int x=0; x<= n/a; x++){
        if((n - a*x) % b == 0){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}