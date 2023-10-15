#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

int main(){
    double x = 0;
    cin >> x;
    int ceilNumber = ceil(x);
    int floorNumber = floor(x);
    int roundNumber = round(x);
    cout << floorNumber << endl;
    cout << ceilNumber << endl;
    cout << roundNumber << endl;
    return 0;
}