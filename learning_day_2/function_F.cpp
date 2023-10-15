#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int x = 0 , y  =0;
    cin >> x >> y;
    long long result = 5 * x + 2 * y + 1ll * x * y;
    cout << result << endl;
    return 0;
}