#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; cin >> n;
    set<int> se;
    while(n--){
        se.insert(cin >> x);
    }
    cout << se.size() << endl;
    return 0;
}