#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n ,m ; cin n >> m;
    int day = 0;
    int tat = n;
    while(tat > 0){
        day++;
        tat--;
        if(day % m == 0){
            tat++;
        }
    }
    cout << day << endl;
    return 0;
}