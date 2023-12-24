#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    if(a.size() != b.size())
        return a.size() < b.size();
    else true;
}
bool tn(string a){
    string tmp = a;
    reverse(a.begin(), a.end());
    return tmp == a;
}
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss >> tmp){
        if(tn(tmp))
            v.push_back(tmp);
    }
    string a = "";
    stable_sort(v.begin(),v.end(),cmp);
    for(auto &x : v){
        a += x + " ";
    }
    a.pop_back();
    cout << a << endl;
    return 0;
}