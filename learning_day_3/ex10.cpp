#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a , b ,c ; cin >> a >> b >> c ;
    (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
    ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}