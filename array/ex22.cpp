#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    int n; cin >> n;
    int a[n]; 
    for(int &x : a) cin >> x;
    ll F[n];
    F[0] = a[0];
    for(int i = 1 ; i < n ; i++)
    {
        F[i] = F[i - 1] + a[i];
    }
    for(int i = 0 ; i < n ;i++)
    {
        cout << F[i] << " ";
    }
}