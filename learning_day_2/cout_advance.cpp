#include <iostream>
#include <iomanip>   
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    cout << setw(6) << setfill('0') << n << endl;
    cout << setw(6) << setfill('#') << n << endl;
    return 0;
}