#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a , b, c, d ; cin >> a >> b >> c >> d ;
    double averageMark = (a + b + c * 2 + d * 3) / 7;
    if(averageMark >= 8){
        cout << "GIOI" << endl;
    }else if (averageMark < 8 && averageMark >= 6.5){
        cout << "KHA" << endl;
    }else if (averageMark < 6.5 && averageMark >=5){
        cout << "TRUNG BINH" << endl;
    }else {
        cout << "YEU" << endl;
    }
    return 0;
}