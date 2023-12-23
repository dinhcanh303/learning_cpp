#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    vector<string> ve;
    vector<string> ve2;
    while(cin >> s){
        ve.push_back(s);
        ve2.push_back(s);
    }
    sort(ve.begin(), ve.end());
    sort(ve2.begin(), ve2.end(),greater<string>());
    for(string s : ve){
        cout << s << " ";
    }
    cout << endl;
    for(string s : ve2){
        cout << s << " " ;
    }
    return 0;
}