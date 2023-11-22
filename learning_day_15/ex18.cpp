#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    int count = 0;
    while(n != 0){
        int tmp = n % 10;
        if(tmp == 2 || tmp == 3 || tmp == 5 || tmp == 7) count++;
        n /= 10;
    }
    cout << count << endl;
    return 0;
}
