#include <bits/stdc++.h>

using namespace std;

struct yod{
    vector<int> rank;
    int tScore;
    int cScore;
    int num;
} p[101];

yod b[101];

int n, r;

bool cmp (yod a, yod b){
    return a.cScore > b.cScore;
}

void setRank(){
    copy(p,p+101,b);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> r;
    for(int i = 0; i < n; i++){
        p[i].num = i;
        p[i].cScore = 0;
        p[i].tScore = 0;
    }
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < n; ++j) {
            int a;
            cin >> a;
            p[j].tScore+=a;
            p[j].cScore=a;
        }
        setRank();
    }
    return 0;
}