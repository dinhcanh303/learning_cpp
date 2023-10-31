#include <bits/stdc++.h>

using namespace std;

int main(){
    int d1,d2,d3; cin >> d1 >> d2 >> d3;
    int distance1 = d1 + d2 + d3;
    int distance2 = 2* (d1 + d2);
    int distance3 = 2* (d2 + d3);
    int distance4 = 2 *(d1 + d3);
    cout << min({distance1, distance2,distance3,distance4}) << endl;
    return 0;
}