#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        stack<int> s;
        while(i != 0){
            s.push(i%2);
            i /= 2;
        }
        while(s.empty()){
            cout << s.top();
            s.pop();
        }
        cout << " ";
    }
    return 0;
}