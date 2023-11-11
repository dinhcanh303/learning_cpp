#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    char x; 
    cin >> a >> b >> x;
    switch (x)
    {
    case '+':
        cout << a << " + " << b << " = " << a+b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a-b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a*b << endl;
        break;
    case '/':
        cout << 1.00 * a /b << endl;
        cout << a << " / " << b << " = " << setprecision(2) << 1.0 * a/b << endl;
        break;
    default:
        cout << a << " % " << b << " = " << setprecision(2) << a%b << endl;
        break;
    }
    return 0;
}