#include <bits/stdc++.h>
using namespace std;
bool check(string a){
    int val = a.size();
    return a[0] % 2 == a[val-1] % 2;
}
bool check1(string a){
    for(int i=0; i<a.size(); i++){
        if (abs(a[i] - a[i + 1]) == 3) return false;
    }
    return true;
}
bool check2(string a){
    for(int i=0; i<a.size(); i++){
        if (a[i] == '2' && a[i + 1] == '8') || (a[i] == '8' && a[i + 1] == '2') return false;
    }
    return true;
}
int main(){
    int n; cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(check(s) && check1(s) && check3(s))
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}