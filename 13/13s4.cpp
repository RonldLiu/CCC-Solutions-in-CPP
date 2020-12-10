#include <bits/stdc++.h>

using namespace std;

int n, m, student1, student2;
vector<int> record[1000005];

bool isTaller(int f, int s){
    if(f==s) return true;
    for(int i = 0; i < record[f].size(); i++) if(isTaller(record[f].at(i),s)) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        record[a].push_back(b);
    }
    cin >> student1 >> student2;
    if(isTaller(student1, student2)) cout << "yes";
    else if(isTaller(student2, student1)) cout << "no";
    else cout << "unknown";
    return 0;
}