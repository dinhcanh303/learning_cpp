#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();
    vector<int> v;
    while(n--){
        string tt;
        getline(cin, tt);
        if(tt == "push"){
            int value;
            cin >> value;
            v.push_back(value);
        }else if(tt == "pop"){
            v.pop_back();
        }else{
            if(v.size() == 0){
                cout << "EMPTY" << endl;
            }else{
                for(auto i : v){
                    cout << i << " "
                }
            }
            
        }

    }
    return 0;
}