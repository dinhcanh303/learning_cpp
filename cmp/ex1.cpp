#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int numEven(int a){
    int cnt = 0;
    while(a){
        if(a % 10 % 2 == 0) cnt++;
        a /= 10;
    }
    return cnt;
}
int numOdd(int a){
    int cnt = 0;
    while(a){
        if(a % 10 % 2 == 1) cnt++;
        a /= 10;
    }
    return cnt;
}
bool cmp(int a, int b){
    int s1 = numEven(a), s2 = numEven(b);
    if(s1 != s2)  return s1 < s2;
    return a < b;
}
bool cmp2(int a, int b){
    int s1 = numOdd(a), s2 = numOdd(b);
    return s1 < s2;
}
int main(){
    int n; cin >> n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
        int x; cin >> x;
        a[i] = x;
        b[i] = x;
    }
    sort(a,a+n,cmp);
    for(int x : a) cout << x << " ";
    cout << endl;
    stable_sort(b,b+n,cmp2);
    for(int x : b) cout << x << " ";
}