
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, r, s, p;
    cout << "Введіть a, b, c: " << endl;
    cin >> a >> b >> c;

   //півпериметр
   p = (a + b + c) / 2; 
    s = sqrt(p * (p - a) * (p - b) * (p - c)); 
    r = s / p;

    cout << "r = " << r << endl;
    return 0;
}

