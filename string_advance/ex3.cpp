#include <bits/stdc++.h>


using namespace std;

int main(){
    string s;
    getline(cin,s);
    int sum = 0;
    for(char c : s){
        if(isdigit(c)) sum += c - '0';
    }
    cout << sum << endl;
    return 0;
}