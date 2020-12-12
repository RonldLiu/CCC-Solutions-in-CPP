#include <iostream>

using namespace std;

bool isDistinct(int num) {
    int digits[5];
    digits[4] = -1;
    digits[3] = -2;
    digits[2] = -3;
    digits[1] = -4;
    int c = 0;
    while (num != 0) {
        digits[c] = num % 10;
        num /= 10;
        c++;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (digits[i] == digits[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int x;
    cin >> x;
    while (x <= 12345) {
        x++;
        if (isDistinct(x)) {
            cout << x;
            break;
        }
    }
    return 0;
}