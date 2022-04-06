#include <iostream>

using namespace std;

int main() {

    int x = 2, y = 3;

    bool b = x + 1 == y++ || ++x == ++y;

    cout << b << endl;

    cout << x << endl;

    cout << y << endl;

    return 0;

}
