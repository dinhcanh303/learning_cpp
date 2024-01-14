#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();
    stack<int> s;
    while(n--){
        string tt;
        getline(cin, tt);
        if(tt == "push"){
            int value;
            cin >> value;
            s.push(value);
        }else if(tt == "pop"){
            if(!s.empty())
                v.pop();
        }else{
            if(s.empty()){
                cout << "NONE" << endl;
            }else{
                cout << s.top() << endl;
            }
        }
    }
    return 0;
}