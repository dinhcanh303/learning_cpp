#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    //1
    for(int i = 1; i <= n ;i++){
        cout << i << " ";
    }
    cout << endl;
    //2
    for(int i = n; i >= 0;i--){
        cout << i << " ";
    }
    cout << endl;
    //3
    for(int i = 0; i <= n; i++){
        if(i % 2 == 0) cout << i << " ";
    }
    cout << endl;
    //4
    for(int i = 0; i <= n; i++){
        if (i % 2 == 1) cout << i << " ";
    }
    cout << endl;
    //5
    for(int i = 0; i < n; i++){
        if(i % 4 == 0) cout << i << " ";
    }
    cout << endl;
    //6
    for(int i = 1; i <= n; i++){
        cout << (char) ('a' + i -1) << " ";
    }
    cout << endl;
    //7
    for(int i = n; i >= 1; i--){
        cout << (char) ('z' - i + 1) << " ";
    }
    cout << endl;
    return 0;
}