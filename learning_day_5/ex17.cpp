#include<iostream>
using namespace std;

int main(){
    char c ; 
    cin >> c;
    if(c >= 'A' && c <= 'Z'){
        cout << "UPPER" << endl;
    }else if (c >= 'a' && c <= 'z'){
        cout << "LOWER" << endl;
    }else if (c >= '0' && c <= '9'){
        cout << "DIGIT" << endl;
    }else cout << "SPECIAL" << endl;
    return 0;
}