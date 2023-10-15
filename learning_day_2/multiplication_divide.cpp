#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    cout <<  n * 2 << endl;
    cout << "\n";
    cout << 1ll * n * 10 << endl;
    cout << "\n";
    cout << n/2 << endl;
    cout << "\n";
    cout << fixed << setprecision(3) <<(double)n / 2 << endl;
    return 0;
}