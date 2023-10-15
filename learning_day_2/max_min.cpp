#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int x = 0,y = 0 ,z = 0 ,t = 0;
    cin >> x >> y >> z >> t ;
    cout << max(x,y) << endl;
    cout << min(z,t) << endl;
    cout << max({x,y,z}) << endl;
    cout << min({x,y,z,t}) << endl;
    return 0;
}