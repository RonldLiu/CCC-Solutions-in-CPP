#include <bits/stdc++.h>

using namespace std;

int numSlides;
vector<int> connections[10000];
int con[10000];

int main(){
    cin >> numSlides;
    while(true){
        int a, b;
        cin >> a >> b;
        if(a==0&&b==0) break;
        connections[a-1].push_back(b-1);
    }
    con[numSlides-1] = 1;
    for(int i = numSlides-1-1; i >= 0; i--){
        for(int j = 0; j < connections[i].size(); j++) con[i] += con[connections[i].at(j)];
    }
    cout << con[0];
    return 0;
}