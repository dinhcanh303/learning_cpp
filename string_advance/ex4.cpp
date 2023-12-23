#include <bits/stdc++.h>


using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(int i = 1; i <= s.length(); i++){
        if(s[i] - s[i-1] != 1){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}