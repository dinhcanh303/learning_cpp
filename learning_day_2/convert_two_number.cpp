#include <iostream>

using namespace std;

int main(){
    int a = 0 , b = 0 ;
    cin >> a >> b;
    int tmp = a;
    a = b ;
    b = tmp;
    long long result = 1ll * 128 * a + 1ll * 97 * b +1000;
    cout << result << endl;
    return 0;
}