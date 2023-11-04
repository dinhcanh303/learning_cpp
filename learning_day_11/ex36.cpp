#include <bits/stdc++.h>

using namespace std;
int main(){
    long long m; cin >> m;
    long long  hour = m/3600;
    int tmp = m % 3600;
    int minute = tmp / 60;
    int second = tmp % 60;
    cout << hour << "h : " << minute << "m : " << second << "s" << endl;
    return 0;
}