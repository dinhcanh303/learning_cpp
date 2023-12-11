#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

// begin() + x : Tro iterator den chi so x nam trong vector

int main()
{
    vector<int>v(256); // 0
    int n ; cin >> n;
    char a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
        v[a[i]]++;
    }
    int ans = 0;
    for(int i = 0 ;i < 255 ; i++)
    {
        if(v[i] != 0) ++ans;
    }
    cout << ans << endl;
    for(int i = 0 ; i < n;i++)
    {
        if(v[a[i]] != 0)
        {
            cout << a[i] << " " << v[a[i]] << endl;
            v[a[i]] = 0;
        }
    }
}