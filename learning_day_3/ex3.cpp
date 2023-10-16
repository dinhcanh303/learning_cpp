#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int c = 0; cin >> c; 
    cout << fixed << setprecision(2) << (c * (double)9/5) + 32 << endl;
    return 0;
}