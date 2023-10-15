#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int r = 0;
    cin >> r;
    float pi = 3.14;
    double perimeterCircle = 2 * pi * r;
    double areaCircle = 1ll * pi *  r * r ;
    cout << fixed << setprecision(4) << perimeterCircle << " " << areaCircle << endl;
    return 0;
}