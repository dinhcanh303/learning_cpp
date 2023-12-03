#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int cnt = 0;
    vector<int> v;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cnt++;
            v.push_back(i);
        }
    }
    cout << cnt << endl;
    for(vector<int> x :v){
        cout << x << " ";
    }
    return 0;
}