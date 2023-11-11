#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int sumChar = 0;
    int sumNumber = 0;
    while(n--){
        char kitu;
        cin >> kitu;
        if(kitu >= 'A' && kitu <= 'z') ++sumChar;
        else if (kitu >= '0' && kitu <= '9') sumNumber += ((int) kitu - 48);
    }
    cout << sumChar << endl;
    cout << sumNumber << endl;
    return 0;
}