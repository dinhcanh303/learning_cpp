#include <bits/stdc++.h>

using namespace std;

int main(){
    int w ; double h; cin >> w >> h;
    double bmi = w / (h * h * 1e-4);
    if(bmi < 18.5) cout << "Under weight" << endl;
    else if (bmi >= 18.5 && bmi < 25) cout << "Normal" << endl;
    else if (bmi >= 25 && bmi < 30) cout << "Over weight" << endl;
    else if (bmi >= 30 && bmi <35) cout << "Obesity 1" << endl;
    else if (bmi >= 35 && bmi <40) cout << "Obesity 2" << endl;
    else if (bmi >= 40) cout << "Extreme obesity" << endl;
    return 0;
}