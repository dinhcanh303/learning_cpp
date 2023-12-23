#include <bits/stdc++.h>


using namespace std;

int main(){
    string s;
    getline(cin,s);
    if(s.size() % 2== 0){
        cout << "NOT FOUND" << endl;
    }else{
        int index = s.size() / 2 ;
        cout << s[index] << endl;
    }
    return 0;
}