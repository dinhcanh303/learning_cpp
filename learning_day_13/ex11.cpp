#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
bool check(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return false;
	}
	return n > 1;
}

int main()
{
	int n; cin >> n;
	for(int i = 1 ; i <= n ;i++)
	{
		if(i == 1) cout << 1 ;
		else if(i % 2 == 0) cout << 2;
		else if(check(i)) cout << i;
		else
		{
			for(int j = 2 ; j <= sqrt(i); j++)
			{
				if(i % j == 0)
				{
					cout << j;
					break;
				}
			}
		}
		cout << endl;
	}
}