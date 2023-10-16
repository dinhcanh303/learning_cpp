#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int r = 0; cin >> r;
    double pi = 3.14;
    cout << fixed << setprecision(4) << 2 * pi * r << " " << fixed << setprecision(3) << 1ll * pi * r *r << endl;
    return 0;
}