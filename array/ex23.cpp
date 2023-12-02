#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
    int x, chan = 0, le = 0;
    while(cin >> x) 
    {
        if(x%2 == 0) ++chan;
        else ++le;
    }
    if(le > chan) cout << "LE";
    else if(le < chan) cout << "CHAN";
    else cout << "CHANLE";
}