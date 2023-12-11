#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int &x : v) cin >> x;
    sort(v.begin(), v.end());
    while(v.size() > 1 && v[0] == 0){
        v.erase(a.begin());
    }
    int first = 0;
    int second = 0;
    for(int i = 0; i < v.size(); i++){
        if(i % 2 == 0) first = first * 10 + v[i];
        else second = second * 10 + v[i];
    }
    cout << first + second << endl;
    
    return 0;
}