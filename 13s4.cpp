#include <bits/stdc++.h>

using namespace std;

int n, m, f, s;
vector<int> record[1000005];

bool isTaller(int f, int s){
    if(f==s) return true;
    for(int i = 0; i < record[f].size(); i++){
        if(isTaller(record[f].at(i),s)) return true;
    }
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
    cin >> f >> s;
    if(isTaller(f,s)) cout << "yes";
    else if(isTaller(s,f)) cout << "no";
    else cout << "unknown";
    return 0;
}