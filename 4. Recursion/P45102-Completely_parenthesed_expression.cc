#include <iostream>
using namespace std;

int avaluar() {
    char c, par, op;
    cin >> c;
    if (c =='(') {
        int x = avaluar();
        cin >> op;
        int y = avaluar();
        cin >> par;
        if (op == '+') return (x+y);
        else if (op == '-') return (x-y);
        else if (op == '*') return (x*y);
    }
    else return (int)(c - '0');
}

int main() {
    int av = avaluar();
    cout << av << endl;
}
