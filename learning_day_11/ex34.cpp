#include <bits/stdc++.h>

using namespace std;
int main(){
    int h,m; cin >> h >> m;
    int sumMinuteOneDay = 24 * 60;
    cout << sumMinuteOneDay - (h * 60 + m) << endl;
    return 0;
}