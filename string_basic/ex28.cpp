#include <bits/stdc++.h>
using namespace std;

string findMax(string a, string b){
    if(a.size() > b.size()){
        return a;
    }else{
        if(a[0] > b[0]) return a;
        else return b;
    }
}
string removeZero(string a){
    for(int i = 0; i < a.size();i++){
        if(a[i] == "0") a.erase(a[i]);
    }
}
int main(){
    string s;
    getline(cin, s);
    for(char &x : s){
        if(!isdigit(x)) x = " ";
    }
    stringstream ss(s);
    string tmp;
    vector<string> v;
    string result = "0";
    while(ss >> tmp){
        tmp = removeZero(tmp);
        result = findMax(result,tmp)
    }
    cout << result << endl;

    return 0;
}