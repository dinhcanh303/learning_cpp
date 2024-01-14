#include <bits/stdc++.h>

using namespace std;
bool check(string x){
    stack<char> s;
    char a[] = {'(','{','['}
    map<char,char> mp = {
        {')','('},
        {'}','{'},
        {']','['}
    };
    for(char x : x){
        if(x == '(' || x == '{' || x == '['){
            s.push(x);
        }else if(x == ')' || x == '}' || x == ']'){
            if(s.empty() || s.top() != mp[x]){
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

int main(){
    string s;
    cin >> s;
    if(check(s)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}