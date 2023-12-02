#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int x; // bien tam
    int chan = 0, le = 0;
    while(cin >> x)
    {
        if(x % 2 == 0) ++chan;
        else ++le;
    }
    if(chan > le) cout << "CHAN";
    else if(le > chan) cout << "LE";
    else cout << "CHANLE";
}