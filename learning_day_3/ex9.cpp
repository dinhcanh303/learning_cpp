#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n = 0; cin >> n;
    ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}