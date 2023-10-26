#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    for(int i=1; i <= n; i++){
        for (int j=1; j<= n; j++){
            cout << "*" ;
        }
        cout << endl;
    }
    cout << endl;
    //2
    for(int i=1; i <= n; i++){
        for(int j=1; j<= n; j++){
            if(i == 1 || i == n || j == 1 || j == n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    //3
    for(int i=1; i <= n; i++){
        for(int j=1; j<= n; j++){
            if(i == 1 || i == n || j == 1 || j == n) cout << "*";
            else cout << "#";
        }
        cout << endl;
    }
    cout << endl;
    //4
    for(int i=1; i <= n; i++){
        for(int j=1; j<= n; j++){
            if(i == 1 || i == n || j == 1 || j == n) cout << i << " ";
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}