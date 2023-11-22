#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    //1
    for(int i=1; i <= n ; i++){
        for(int j=1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    //2
    for(int i=n; i >= 1; i--){
        for(int j=1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    //3
    for(int i = 1; i <= n ; i++){
        for(int j=1; j <=n; j++){
            if(j > n - i) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    //4
     for(int i = 1; i <= n ; i++){
        for(int j=n; j >= 1; j--){
            if(j > n - i + 1) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
    cout  <<  endl;
    //5
    for(int i=1;i <=n;i++){
        for(int j =1 ; j <= i; j++){
            if(i == j || i == n || j == 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}
