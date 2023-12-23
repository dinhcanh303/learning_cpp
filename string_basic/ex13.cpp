#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    getline(cin, s);
    stringstream ss;
    string tmp;
    while(ss >> tmp){
        if(tmp == "." || tmp == "," || tmp == "!" || tmp == "?")
            tmp = " ";
    }
    string tmp2;
    while (getline(ss,tmp2," "))
    {
        cout << tmp2 << endl;
    }
    return 0;
}