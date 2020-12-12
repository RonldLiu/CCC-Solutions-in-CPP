#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin >> x;
    string inputs[x];
    cin.ignore();
    for (int i = 0; i < x; i++) {
        getline(cin, inputs[i]);
    }
    for (int i = 0; i < x; i++) {
        if (inputs[i].length() == 4) {
            inputs[i] = "****";
        } else {
            if (isspace(inputs[i].at(4))) {
                inputs[i].replace(0, 4, "****");
            }
            if (isspace(inputs[i].at(inputs[i].length() - 5))) {
                inputs[i].replace(inputs[i].length() - 4, 4, "****");
            }
            for (int j = 0; j < inputs[i].length() - 6; j++) {
                if (isspace(inputs[i].at(j)) && isspace(inputs[i].at(j + 5))) {
                    inputs[i].replace(j + 1, 4, "****");
                }
            }
        }
        cout << inputs[i] << endl;
    }
    return 0;
}