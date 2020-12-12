#include <bits/stdc++.h>

using namespace std;

int processPoints(vector<char> a) {
    int count = 0;
    for (int i = 0; i < a.size(); i++) {
        cout << a.at(i) << " ";
        if (a.at(i) == 'A') {
            count += 4;
        } else if (a.at(i) == 'K') {
            count += 3;
        } else if (a.at(i) == 'Q') {
            count += 2;
        } else if (a.at(i) == 'J') {
            count += 1;
        }
    }
    if (a.size() == 0) {
        count += 3;
    } else if (a.size() == 1) {
        count += 2;
    } else if (a.size() == 2) {
        count += 1;
    }
    cout << count << endl;
    return count;
}

int main() {
    vector<char> a;
    string input;
    cin >> input;
    int count = 0;
    cout << "Cards Dealt Points" << endl;
    for (int i = 0; i < 17; i++) {
        if (input.at(i) != 'D' && input.at(i) != 'C' && input.at(i) != 'S' && input.at(i) != 'H') {
            a.push_back(input.at(i));
        }
        if (input.at(i) == 'D') {
            cout << "Clubs ";
            count += processPoints(a);
            a.clear();
        } else if (input.at(i) == 'H') {
            cout << "Diamonds ";
            count += processPoints(a);
            a.clear();
        } else if (input.at(i) == 'S') {
            cout << "Hearts ";
            count += processPoints(a);
            a.clear();
        }
        if (i == 16) {
            cout << "Spades ";
            count += processPoints(a);
            a.clear();
        }
    }
    cout << "Total " << count;
    return 0;
}