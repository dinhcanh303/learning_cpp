#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int m = n;
    //1
    int i = 1;
    while(m--){
        cout << i++ << " ";
    }
    cout << endl;
    //2
    m= n + 1;
    while(m){
        cout << m -1 << " ";
        m--;
    }
    cout << endl;
    //3
    i = 0;
    while(i <= n){
        if(i % 2 == 0) cout << i << " ";
        i++;
    }
    cout << endl;
    //4
    i = 0;
    while(i <= n){
        if(i % 2 == 1) cout << i << " ";
        i++;
    }
    cout << endl;
    //5
    i = 0;
    while(i < n){
        if(i % 4 == 0) cout << i << " ";
        i++;
    }
    cout << endl;
    //6
    i = 1;
    while(i <= n){
        cout << (char) ('a' + i -1) << " ";
        i++;
    }
    cout << endl;
    //7
    m = n;
    while(m >=1){
        cout << (char) ('z' - m + 1) << " ";
        m--;
    }
    cout << endl;
    return 0;
}