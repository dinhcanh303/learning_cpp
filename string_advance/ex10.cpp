#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    set<string> se;
    vector<string> ve;
    while(cin >> s){
        if(se.count(s) == 0){
            ve.push_back(s);
            se.insert(s);
        }
    }
    for(string s : se){
        cout << s << " ";
    }
    cout << endl;
    for(string s : ve){
        cout << s << " ";
    }
    return 0;
}