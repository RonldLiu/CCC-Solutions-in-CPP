#include <iostream>

using namespace std;

int main() {
    int x = 1;
    bool play = true;
    while (play) {
        int c;
        cin >> c;
        if (c == 0) {
            cout << "You Quit!";
            return 0;
        }
        x += c;
        if (x == 54) {
            x = 19;
        } else if (x == 90) {
            x = 48;
        } else if (x == 99) {
            x = 77;
        } else if (x == 9) {
            x = 34;
        } else if (x == 40) {
            x = 64;
        } else if (x == 67) {
            x = 86;
        }
        if (x > 100) {
            x -= c;
        }
        cout << "You are now on square " << x << endl;

        if (x == 100) {
            cout << "You Win!";
            play = false;
        }
    }
    return 0;
}