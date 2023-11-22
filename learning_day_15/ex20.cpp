#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int chiaBia = n / 28;
    int voBia = chiaBia;
    while(voBia >= 3){
        chiaBia += voBia / 3;
        voBia = voBia / 3 + voBia % 3;
    }
    cout << chiaBia << endl;
    return 0;
}
