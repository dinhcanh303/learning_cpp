#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    if(a.size() != b.size())
        return a.size() < b.size();
    else return a < b;
}
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    string a = "";
    sort(v.begin(),v.end());
    for(auto &x : v){
        a += x + " ";
    }
    a.pop_back();
    cout << a << endl;
    string b = "";
    sort(v.begin(),v.end(),cmp);
    for(auto &x : v){
        b += x + " ";
    }
    b.pop_back();
    cout << b << endl;
    
    return 0;
}