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
    string t;
    getline(cin,t);
    map<string,int> m;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        tmp = _toLower(tmp);
        m[tmp] = 1;
    }
    stringstream ss1(t);
    string tmp2;
    while(ss1 >> tmp2){
        tmp2 = _toLower(tmp2);
        if(m[tmp2] == 1) m[tmp2] = 2;
    }
    for(auto x : m){
        if(x.second == 2)
            cout << x.first << " ";
    } 
    return 0;
}