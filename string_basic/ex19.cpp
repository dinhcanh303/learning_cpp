#include <bits/stdc++.h>
using namespace std;
string _toLower(string str){
    for(char &c : str){
        c = tolower(c);
    }
    return str;
}
int main(){
    string s;
    set<string> se;
    while(cin >> s){
        s = _toLower(s);
        se.insert(s);
    }
    cout << se.size() << endl;
    return 0;
}