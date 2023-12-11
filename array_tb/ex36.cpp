#include <bits/stdc++.h>

using namespace std;
int check(int a[],int sum ){
    sort(a,a+n);
    int l = 0, r = n -1;
    while (l < r){
        if(a[l] + a[r] == sum) return 1;
        else if (a[l] + a[r] < sum) l++;
        else r--;
    }
    return -1;
}
int main(){
    int n ; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << check(a,0) << endl;
}