#include <bits/stdc++.h>
using namespace std;
bool cmp(string a,string b){
    if(a.size() != b.size()) return a.size() < b.size();
    return a < b;    
}
int main(){
    string s;
    vector<string> ve;
    while(cin >> s){
        ve.push_back(s);
    }
    sort(ve.begin(), ve.end(),cmp);
    for(string s : ve){
        cout << s << " ";
    }
    cout << endl;
    return 0;
}