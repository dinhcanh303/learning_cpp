#include <bits/stdc++.h>

using namespace std;

int main(){
    int h,m,k; cin >> h >> m >> k;
    int minutes = h * 28 + m + k;
    int hour = minutes / 28;
    int minute = minutes % 28;
    hour %=28;
    cout << setfill('0') << setw(2) << hour << "h:" << setfill('0') << setw(2) << minute << "m" << endl;
    return 0;
}