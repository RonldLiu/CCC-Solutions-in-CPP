#include <bits/stdc++.h>

using namespace std;

vector<double> streams;

void split(int a, int b) {
    double per = streams.at(a) * b / 100;
    streams.insert(streams.begin() + a, per);
    streams.at(a + 1) -= per;
}

void join(int a) {
    streams.at(a) += streams.at(a + 1);
    streams.erase(streams.begin() + a + 1);
}

void end() {
    for (int i: streams) printf("%d ", i);
}

int main() {
    int size, t;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &t);
        streams.push_back(t);
    }
    while (true) {
        scanf("%d", &t);
        if (t == 99) {
            int a, b;
            scanf("%d", &a);
            scanf("%d", &b);
            split(a - 1, b);
        }
        if (t == 88) {
            int a;
            scanf("%d", &a);
            join(a - 1);
        }
        if (t == 77) {
            end();
            break;
        }
    }
    return 0;
}