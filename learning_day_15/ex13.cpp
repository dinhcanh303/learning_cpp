#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    long long sum = 0;
    for(int i = 1; i <= n; i++){
        sum += 2 * i -1;
    }
    cout << sum << endl;
    return 0;
}

//2
// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int n; cin >> n;
//     long long sum = 0;
//     for(int i = 1; i <= 2*n-1; i+=2){
//         sum += i;
//     }
//     cout << sum << endl;
//     return 0;
// }