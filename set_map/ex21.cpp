#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    set<char> se;
    while(n--){
        char x; cin >> x;
        se.insert(x);
    }
    cout << se.size() << endl;
    for(auto x : se){
        cout << x << " ";
    }
    cout << endl;
    for(auto x = se.rbegin(); x != se.rend(); x++){
        cout << *x << " ";
    }
}