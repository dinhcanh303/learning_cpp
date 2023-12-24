#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    getline(cin,s);
    string py = "python";
    int index = 0;
    for(char x : s){
        if(x == py[index]) index++;
    }
    if(index == 6) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}