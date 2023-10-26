#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    for(int i=1; i <= n; i++){
        for (int j=1; j<= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    //2
    for(int i=1; i <= n; i++){
        for(int j= 1; j<= n+ 1-i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    //3 
    for(int i=1; i <= n; i++){
        for(int j= 1; j<= n+ 1-i; j++){
            
        }
        cout << endl;
    }
    cout << endl;
    //5 
    for(int i=1; i <= n; i++){
        for(int j= 1; j<= n; j++){
            if( i == 1 || j == n || i == j) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    cout << endl;
    

  
    return 0;
}