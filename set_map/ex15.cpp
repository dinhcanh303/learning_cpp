#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n; cin >> n;
	int a[n];
	multiset<int> se;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		se.insert(a[i]);
	}
	int T; cin >> T;
	while(T--){
		int tt, x; cin >> tt >> x;
		if(tt == 1){
			se.insert(x);
		}
		else if(tt == 2){
			auto it = se.find(x);
			if(it != se.end()){
				se.erase(it);
			}
		}
		else if(tt == 3){
			//upper_bound(se.begin(), se.end(), X)
			//se.upper_bound(x); // dung thang nay
			auto it = se.lower_bound(x);
			if(it == se.end()){
				cout << "-1\n";
			}
			else{
				cout << *it << endl;
			}
		}
		else{
			auto it = se.upper_bound(x);
			if(it != se.begin()){
				--it;
				cout << *it << endl;
			}
			else{
				cout << "-1\n";
			}
		}
	}
}