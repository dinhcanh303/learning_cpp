#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n ;
    int chan = 0;
    int le = 0;
    vector<int> v;
    while(cin >> n){
        v.push_back(n);
    }
    for(int i = 0; i < v.size(); i++){
        if(v[i] % 2 == 0) chan++;
        else le++;
    }
    if(chan > le) cout << "CHAN" << endl;
    else if(chan < le) cout << "LE" << endl;
    else cout << "CHANLE" << endl;
    return 0;
}