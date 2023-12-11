#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map<int,int> ma;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int x; cin >> x;
            if(i == 0){
                ma[x] = 1;
            }else{
                auto it = ma.find(x);
                if((*it).second == i) ma[x]++;
            }
        }
    }
    bool print = true;
    for(auto x : ma){
        if(x.second == n){
            print = false;
            cout << x.first << endl;
        }
    }
    if(print) cout << "NOT FOUND" << endl;
    return 0;
}