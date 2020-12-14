#include <bits/stdc++.h>

using namespace std;

int n;
vector<double> a;
double smallest = INT_MAX;

double minDoublel(double num1, double num2) {
    if (num1 < num2) return num1;
    else return num2;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        double temp;
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    for (int i = 1; i < n - 1; i++) {
        smallest = minDoublel(smallest, (a[i + 1] - a[i - 1]) / 2);
    }
    cout << fixed << setprecision(1) << smallest;
    return 0;
}