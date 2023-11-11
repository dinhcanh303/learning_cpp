#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

// __gcd(a,b) : tinh uoc chung lon nhat giua hai thang a va b

int gcd(int a, int b)
{
    while(b != 0)
    {
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}
int main()
{
    int a, b; cin >> a >> b;
    for(int i = a ; i <= b ; i++)
    {
        for(int j = i + 1 ; j <= b ; j++)
        {
            if(gcd(i, j) == 1)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}