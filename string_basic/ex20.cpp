#include <bits/stdc++.h>
using namespace std;
bool tn(string a){
    string tmp = a;
    reverse(a.begin(), a.end());
    return a == tmp;
}
int main(){
    string s;
    vector<string> ve;
    while(cin >> s){
        if(tn(s))
            ve.push_back(s);
    }
    sort(ve.begin(), ve.end());
    for(string s : ve){
        cout << s << " ";
    }
    cout << endl;
    return 0;
}