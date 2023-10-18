#include<iostream>
using namespace std;

int main(){
    long long n;
    int a , b ;
    cin >> n >> a >> b;
    if(2*a <= b){
        cout << 1ll * n * a << endl;
    }else if (2*a > b){
        if(n % 2 == 0){
            cout << 1ll * n / 2 * b << endl;
        }else {
            cout << 1ll * n / 2 * b + a << endl;
        }
    }
    return 0;
}