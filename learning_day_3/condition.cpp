#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    int n = 0; cin >> n;
    (n % 2) == 0 ? cout << "YES" << endl : cout << "NO" << endl;
    ((n % 3) == 0 && (n % 5) == 0)? cout << "YES" << endl : cout << "NO" << endl;
    ((n % 3) == 0 && (n % 7) != 0)? cout << "YES" << endl : cout << "NO" << endl;
    ((n % 3) == 0 || (n % 7) == 0 ) ? cout << "YES" << endl : cout << "NO" << endl;
    (n > 30 && n < 50) ? cout << "YES" << endl : cout << "NO" << endl;
    (n >= 30 && ((n%2) == 0 || (n%3) == 0 || (n%5) == 0))? cout << "YES" << endl : cout << "NO" << endl;
    (n >= 10 && n <= 99 && (n % 10 == 2 || n % 10 == 3 || n %10 == 5 || n % 10 == 7))? cout << "YES" << endl : cout << "NO" << endl;
    (n <= 100 && (n % 23) == 0)? cout << "YES" << endl : cout << "NO" << endl;
    (n < 10 || n > 20) ? cout << "YES" << endl : cout << "NO" << endl;
    ((n % 10) % 3 == 0)? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}