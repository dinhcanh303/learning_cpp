#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    int a = 0 , b =0 ;
    cin >> b >> a;
    int divide1 = a / b;
    double divide2 = (double)a / b;
    cout << divide1 << endl;
    cout << fixed << setprecision(2) << divide2 << endl;
    return 0;
}