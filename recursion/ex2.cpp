#include<bits/stdc++.h>

using namespace std;

int recursion(int n){
    if(n == 0) return 0;
    else {
        return n * n + recursion(n-1);
    }
}
int main(){
    int n; cin >> n;
    cout << recursion(n) << endl;
    return 0;
}