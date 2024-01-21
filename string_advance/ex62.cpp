#include <bits/stdc++.h>

using namespace std;
bool check(string s1, string s2){
    int n1 = s1.size(), n2 = s2.size();
    if(n1 > n2) return false;
    else if(n2 > n1) return true;
    else return s1 < s2;
}
string diff(string s1, string s2){
    if(check(s1, s2)) swap(s1, s2);
    int n1= s1.size(), n2= s2.size();
    string res = "";
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int carry = 0;
    for(int i = 0; i < n2; i++){
        int tmp = (s1[i] - '0') - (s2[i] - '0') - carry;
        if(tmp < 0){
            tmp += 10;
            carry = 1;
        }else carry = 0;
        res += (char)(tmp % 10) + '0';
    }
    for(int i = n2; i < n1; i++){
        int tmp = (s1[i] - '0') - carry;
        if(tmp < 0){
            tmp += 10;
            carry = 1;
        }else carry = 0;
        res += (char)(tmp % 10) + '0';
    }
    reverse(res.begin(),res.end());
    while(res.size() > 1 && res[0] == '0'){
        res.erase(0,1);
    }
    return res;
}

int main(){
    int n; cin >> n;
    while(n--){
        string a, b;
        cin >> a >> b;
        cout << diff(a,b) << endl;
    }
    return 0;
}