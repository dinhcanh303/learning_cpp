#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    char x;
    cin >> a >> b >> x;
    switch (x)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        cout << a << " / " << b << " = " << fixed << setprecision(2) << 1.0 * a / b << endl;
        break;
    default:
        cout << a << " % " << b << " = " << a % b << endl;
        break;
    }
    return 0;
}
