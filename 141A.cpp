#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;


    string a1 = a + b;
    sort(c.begin(),c.end());
    sort(a1.begin(),a1.end());

    if (a1 == c) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
