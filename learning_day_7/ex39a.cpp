#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    int dem_C = 0, demkt = 0;
    for(int i = 0 ; i < n; i++)
    {
        char x ; cin >> x;
        if(x == 'C') ++dem_C;
        if(x == '+') ++demkt;
    }
    if(dem_C >= 1 && demkt >= 2) cout << "YES";
    else cout << "NO";
}
 
You to Everyone (23 Oct 2023, 19:55)
Vay TH ma + ko lien ke nhau thi sao anh
Say neu truong hop lien ke thi minh giai nhu nao anh
 
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n ; cin >> n;
	int ans = 0;
	bool ok = false;
	for(int i = 0 ; i < n; i++)
	{
		char x ; cin >> x;
		if(x == 'C')
		{
			ok = true;
		}
		else if(x != '+') ok = false;
		if(x == '+' && ok == true)
		{
			++ans;
			if(ans >= 2)
			{
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
}