#include <bits/stdc++.h>

using namespace std;

string sum(string s1, string s2){
    int n1= s1.size(), n2= s2.size();
    if(n1 > n2) swap(s1, s2);
    string res = "";
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int carry = 0;
    for(int i = 0; i < n1; i++){
        int tmp = (s1[i] - '0') + (s2[i] - '0') + carry;
        res += (char)(tmp % 10) + '0';
        carry = tmp / 10;
    }
    for(int i = n1; i < n2; i++){
        int tmp = (s2[i] - '0') + carry;
        res += (char)(tmp % 10) + '0';
        carry = tmp / 10;
    }
    if(carry == 1){
        res += '1';
    }
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    int n; cin >> n;
    while(n--){
        string a, b;
        cin >> a >> b;
        cout << sum(a,b) << endl;
    }
    return 0;
}