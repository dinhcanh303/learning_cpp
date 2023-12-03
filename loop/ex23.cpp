#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int c = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << c++ << " "; 
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n; j++){
            cout << i + j << " "; 
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n; j++){
            cout << i + j << " "; 
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n; j++){
            if(n - j > i) cout << "~";
            else cout << i;
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++){
        int num = i;
        for(int j = 0; j < i; j++){
            cout << num << " "; 
            num += n - j;
        }
        cout << endl;
    }

    return 0;
}