#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n; cin >> n;
    int countYear = n/365;
    int countWeek = (countYear > 0) ? (n - (countYear * 365))/ 7 : n /7;
    int countDay = n - (countYear * 365 + countWeek * 7);
    cout << countYear << " " << countWeek << " " << countDay << endl;
    return 0;
}