#include <iostream>

using namespace std;

int main(){
    int x = 0 , y = 0 , z = 0 , t = 0;
    cin >> x >> y >> z >> t;
    cout << y << "," << z << "," << x << "," << t << endl;
    long long sum = 1ll * x + y + z + t;
    cout << sum << endl;
    long long result = x - y + 1ll * z * t;
    cout << result << endl;
    return 0;
}