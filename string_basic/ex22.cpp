#include <bits/stdc++.h>
using namespace std;
string array_to_string(char a[], int n){
    //code here
    string s;
    for(int i = 0; i < n;i++){
        s += a[i];
    }
    return s;
}

int main(){
    int n;
    char a[10001];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << array_to_string(a, n) << endl;
}