#include <bits/stdc++.h>

using namespace std;

int main(){
    map<int,int> mp;
    int a[] = {1,2,3,4,1,2,3,4,5,5,1};
    for(int x : a) mp[x]++;
    for(auto it : mp)
        cout << it.first << " " << it.second << endl;
    return 0;
}