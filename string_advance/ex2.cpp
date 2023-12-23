#include <bits/stdc++.h>

using namespace std;

string reverse(string str){
    reverse(str.begin(), str.end());
    return str;
}
string _toLower(string str){
    for(char &c : str){
        c = tolower(c);
    }
    return str;
}
string _toUpper(string str){
    for(char &c : str){
        c = toupper(c);
    }
    return str;
}
int main(){
    string s;
    getline(cin,s);
    
    cout << reverse(s) << endl;
    cout << _toLower(s) << endl;
    cout << _toUpper(s) << endl;
    return 0;
}