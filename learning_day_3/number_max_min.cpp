#include <iostream>

using namespace std;

int main(){
    int a,b; cin >> a >> b;
    long long min = 1ll * a / b * b;
    long long max = 1ll * ( a / b + 1) * b;
    cout << min << endl;
    cout << max << endl;
    return 0;
}