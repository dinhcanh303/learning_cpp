#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

const int maxn = 1e6 + 1; 
int t[maxn];

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
        t[a[i]]++;
    }
    for(int i = 0 ; i <= 1000000 ; i++)
    {
        if(t[i] != 0)
        {
            cout << i << " " << t[i] << endl;
        }
    }
}