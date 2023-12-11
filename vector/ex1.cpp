#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    int n ; cin >> n;
    for(int i = 0; i < n; i++){
        int a ,b; cin >> a >> b;
        if(a == 1) v.push_back(b);
        else if(a == 2 && v.size != 0) v.pop_back;
    }
    for(vector<int> i : v){
        cout << i << " " << endl;
    }
    return 0;
}