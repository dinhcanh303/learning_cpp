#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    double a = sqrt(n * 1.0);
    double b = cbrt(n * 1.0);
    cout << fixed << setprecision(2) << a << endl;
    cout << fixed << setprecision(3) << b << endl;
    return 0;
}