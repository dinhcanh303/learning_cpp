#include <bits/stdc++.h>
using namespace std;

bool params(string a){

    return tmp == a;
}
int main(){
    string s;cin >> s;
    int cnt[256] = {0};
    for(char x : s){
        cnt[tolower(x)] = 1;
    }
    for(int i = 97; i <= 122; i++){
        if(cnt[i] == 0){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}