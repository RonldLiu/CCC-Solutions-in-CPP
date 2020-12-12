#include <iostream>

using namespace std;

bool isPossible(string s, bool a, bool A, bool b, bool B, bool c, bool C, bool d, bool D, bool e, bool E) {
    if (((s[0] == 'a' && a) || (s[0] == 'A' && A)) && ((s[1] == 'b' && b) || (s[1] == 'B' && B)) &&
        ((s[2] == 'c' && c) || (s[2] == 'C' && C)) && ((s[3] == 'd' && d) || (s[3] == 'D' && D)) &&
        ((s[4] == 'e' && e) || (s[4] == 'E' && E))) {
        return true;
    }
    return false;
}

int main() {
    string m, f;
    int t;
    bool a, A, b, B, c, C, d, D, e, E;
    a = A = b = B = c = C = d = D = e = E = true;
    cin >> m >> f;
    if (m.substr(0, 2) == "aa" && f.substr(0, 1) == "aa") {
        A = false;
    }
    if (m.substr(0, 2) == "AA" || f.substr(0, 2) == "AA") {
        a = false;
    }
    if (m.substr(2, 2) == "bb" && f.substr(2, 2) == "bb") {
        B = false;
    }
    if (m.substr(2, 2) == "BB" || f.substr(2, 2) == "BB") {
        b = false;
    }
    if (m.substr(4, 2) == "cc" && f.substr(4, 2) == "cc") {
        C = false;
    }
    if (m.substr(4, 2) == "CC" || f.substr(4, 2) == "CC") {
        c = false;
    }
    if (m.substr(6, 2) == "dd" && f.substr(6, 2) == "dd") {
        D = false;
    }
    if (m.substr(6, 2) == "DD" || f.substr(6, 2) == "DD") {
        d = false;
    }
    if (m.substr(8, 2) == "ee" && f.substr(8, 2) == "ee") {
        E = false;
    }
    if (m.substr(8, 2) == "EE" || f.substr(8, 2) == "EE") {
        e = false;
    }
    cin >> t;
    for (int i = 0; i < t; i++) {
        string temp;
        cin >> temp;
        if (isPossible(temp, a, A, b, B, c, C, d, D, e, E)) {
            cout << "Possible baby.\n";
        } else {
            cout << "Not their baby!\n";
        }
    }
    return 0;
}