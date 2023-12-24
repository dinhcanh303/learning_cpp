#include <bits/stdc++.h>
using namespace std;

string _toLower(string a){
    for(char &x : a){
        x = tolower(x);
    }
    return a;
}
int main(){
    string s;
    getline(cin,s);
    string s1;
    getline(cin,s1);
    stringstream ss(s);
    string tmp;
    string a = "";
    while(ss >> tmp){
        tmp = _toLower(tmp)
        tmp[0] = toupper(tmp[0]);
        a += tmp + " ";
    }
    a.pop_back();
    cout << a << endl;
    if(s1[1] == '/')
        s1 = "0" + s1;
    if(s1[4] == '/')
        s1.insert(3,"0")
    cout << s1 << endl;
    return 0;
}