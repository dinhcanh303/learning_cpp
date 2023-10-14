#include <iostream>

using namespace std;

int main(){
    int width = 0 , height = 0;
    cin >> width >> height;
    int perimeterRectangle = (width + height)*2;
    long long areaRectangle = 1ll *  width * height;
    cout << "Chu vi HCN la : " << perimeterRectangle << endl;
    cout << "Dien tich HCN la : " << areaRectangle << endl;
    return 0;
}