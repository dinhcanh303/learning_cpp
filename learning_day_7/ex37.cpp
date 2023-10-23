#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n ; cin >> n ;
    long long hour = n / 3600;
    int minute = n % 3600 / 60;
    int second = n % 3600 % 60;
    cout << hour << "h : " << minute << "m : " << second << "s" << endl;
    return 0;
}