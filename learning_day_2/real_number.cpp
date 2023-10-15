#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double f = 0;
    cin >> f;
    int result = 1*f / 10 * 10;
    cout << result << endl;
    cout << fixed << setprecision(2) << f * 1.00 - result * 1.00 << endl;
    return 0;
}