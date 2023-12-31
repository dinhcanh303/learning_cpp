#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int t,n; cin >> t >> n;
    if ((t >= 1 && t <= 12) && n > 0){
        switch (t)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << 31 << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << 30 << endl;
            break;
        default:
            break;
        }
        if(t == 2){
            (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) ? cout << 29 << endl : cout << 28 << endl;
        }
    }else {
        cout << "INVALID" << endl;
    }
    return 0;
}