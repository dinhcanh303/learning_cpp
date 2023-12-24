#include <bits/stdc++.h>
using namespace std;

string _toLower(string a){
    for(char &x : a){
        x = tolower(x);
    }
    return a;
}
string _toUpper(string a){
    for(char &x : a){
        x = toupper(x);
    }
    return a;
}
string ch(string a){
    if(a[1] == '/')
        a = "0" + a;
    if(a[4] == '/')
        a.insert(3,"0")
    return a;
}
int main(){
    string s;
    getline(cin,s);
    string s1;
    getline(cin,s1);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss >> tmp){
        tmp = _toLower(tmp)
        v.push_back(tmp);
    }
    string last = v.pop_back();
    last = _toUpper(last);

    string a = "";
    for(auto &x : v){
        a +=  _toLower(x) + " ";
    }
    a.pop_back();
    
    cout << a + ", " + last << endl;
    cout << last + ", " + a << endl;
    
    return 0;
}