#include <iostream>

using namespace std;

int main() {
    int x, a, b, c, count = 0;
    cin >> x >> a >> b >> c;
    while (x > 0) {
        x--;
        if (count % 3 == 0) {
            a++;
            if (a == 35) {
                a = 0;
                x += 30;
            }
        }
        if (count % 3 == 1) {
            b++;
            if (b == 100) {
                b = 0;
                x += 60;
            }
        }
        if (count % 3 == 2) {
            c++;
            if (c == 10) {
                c = 0;
                x += 9;
            }
        }
        count++;
    }
    cout << "Martha plays " << count << " times before going broke.";
    return 0;
}