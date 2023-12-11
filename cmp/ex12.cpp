#include <bits/stdc++.h>
using namespace std;

int lastPos(int a[], int n , int x){
    int res = -1 , l = 0 , r = n -1;
    while(l<=r){
        int mid = (l + r) /2;
        if(a[mid] == x){
            res = mid;
            l = mid + 1;
        }
        else if(a[mid] < x){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return res;
}

int main(){
    int n, X ; cin >> n >> X;
    int a[n];
    for(int &x : a) cin >> x;
    cout << lastPos(a,n,X) << endl;
    return 0;
}