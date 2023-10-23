#include <bits/stdc++.h>
using namespace std;

int main(){
    int hour , minute; cin >> hour >> minute;
    int totalMinute = hour * 60 + minute;
    cout << 24 * 60 - totalMinute << endl;
    return 0;
}