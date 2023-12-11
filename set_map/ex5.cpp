#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map<char,int> a;
    for(int i=0; i<n; i++){
        char c; cin >> c;
        a[c]++;
    }
    
    auto minChar = a.begin();
    cout << (*minChar).first << " " << (*minChar).second << endl;
    cout << endl;
    auto maxChar = a.rbegin();
    cout << (*maxChar).first << " " << (*maxChar).second << endl;
    cout << endl;
    for(auto x : a){
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for(auto x = a.rbegin(); x != a.rend(); x++){
         cout << (*x).first << " " << (*x).second << endl;
    }
    return 0;
}