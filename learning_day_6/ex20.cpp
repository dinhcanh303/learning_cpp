#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n , m ,a ; cin >> n >> m >> a;
     int x = ceil(m * 1.0/a);
     int y = ceil(n * 1.0/a);
     cout << 1ll * x * y << endl;
    return 0;
}