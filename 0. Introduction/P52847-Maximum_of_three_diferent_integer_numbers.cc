#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < c and b < c) cout << c << endl;
    if (c < b and a < b) cout << b << endl;
    if (c < a and b < a) cout << a << endl;
}
