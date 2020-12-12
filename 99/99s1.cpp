#include <bits/stdc++.h>

using namespace std;

bool noHigh(int index, int loop, vector<string> cards) {
    for (int i = 0; i < loop; i++) {
        if (cards.at(index + 1 + i) == "ace" || cards.at(index + 1 + i) == "king" ||
            cards.at(index + 1 + i) == "queen" || cards.at(index + 1 + i) == "jack") {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> cards;
    string temp;
    bool isPlayerA;
    int A = 0, B = 0;
    for (int i = 0; i < 52; i++) {
        cin >> temp;
        cards.push_back(temp);
    }

    for (int i = 0; i < 52; i++) {
        isPlayerA = i % 2 == 0;
        if (cards.at(i) == "ace" && i < 48 && noHigh(i, 4, cards)) {
            if (isPlayerA) {
                cout << "Player A scores 4 point(s)." << endl;
                A += 4;
            } else {
                cout << "Player B scores 4 point(s)." << endl;
                B += 4;
            }
        }
        if (cards.at(i) == "king" && i < 49 && noHigh(i, 3, cards)) {
            if (isPlayerA) {
                cout << "Player A scores 3 point(s)." << endl;
                A += 3;
            } else {
                cout << "Player B scores 3 point(s)." << endl;
                B += 3;
            }
        }
        if (cards.at(i) == "queen" && i < 50 && noHigh(i, 2, cards)) {
            if (isPlayerA) {
                cout << "Player A scores 2 point(s)." << endl;
                A += 2;
            } else {
                cout << "Player B scores 2 point(s)." << endl;
                B += 2;
            }
        }
        if (cards.at(i) == "jack" && i < 51 && noHigh(i, 1, cards)) {
            if (isPlayerA) {
                cout << "Player A scores 1 point(s)." << endl;
                A += 1;
            } else {
                cout << "Player B scores 1 point(s)." << endl;
                B += 1;
            }
        }
    }
    cout << "Player A: " << A << " point(s).\nPlayer B: " << B << " point(s).";
    return 0;
}