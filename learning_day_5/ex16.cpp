#include<iostream>
using namespace std;

int main(){
    char c ; 
    cin >> c;
    if(c >= 'A' && c < 'Z'){
        cout << (char)(c + 33) << endl;
    }else if (c == 'Z' || c == 'z'){
        cout << 'a' << endl;
    }else {
        cout << (char)(c + 1) << endl;
    }
    return 0;
}