#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int t[1001]; // tat ca phan tu deu bang 0
int ts[1001];
int main()
{
    int n; cin>> n;
    int a[n];
    for(int &x : a)
    {
        cin >> x;
        t[x]++;
        ts[x]++;
    }
    for(int x : a)
    {
        if(t[x] != 0)
        {
            cout << x << " " << t[x] << endl;
            t[x] = 0; // Gia tri x da in roi 
        }
    }
    cout << endl;
    int maxts = 0, mints = MOD; // luu max tan suat va min tan suat
    for(int i = 0 ; i <= 1000 ; i++)
    {
        if(ts[i] != 0)
        {
            maxts = max(maxts, ts[i]); 
            mints = min(mints, ts[i]);
            cout << i << " " << ts[i] << endl;
        }
    }
    cout << endl;
    for(int i = 1000 ; i >= 0 ; i--)
    {
        if(ts[i] == maxts)
        {
            cout << i<< endl;
            break;
        }
    }
    for(int i = 0 ; i <= 1000 ; i++)
    {
        if(ts[i] == mints)
        {
            cout << i ;
            break;
        }
    }
}