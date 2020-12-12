/*
ID: ronaldl2
TASK: test
LANG: C++
*/

#include <bits/stdc++.h>

#define FOR(i,a,b) for (int i = a; i < b; i++)
#define pb push_back

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()

#define mk(x) int (x); cin >> (x);

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<string, int> si;
typedef vector<ii> vii;
typedef vector<si> vsi;
typedef long long ll;
typedef vector<ll> vll;

struct box{
    int x;
    int y;
    int z;
    ll v;
};

bool cmp(box a, box b){
    return a.v < b.v;
}

bool canFit(box b, box c){
    if(b.x<=c.x && b.y<=c.y && b.z<=c.z){
        return true;
    }
    if(b.x<=c.x && b.z<=c.y && b.y<=c.z  ){
        return true;
    }
    if(b.y<=c.x && b.x<=c.y && b.z<=c.z){
        return true;
    }
    if(b.y<=c.x && b.z<=c.y && b.x<=c.z  ){
        return true;
    }
    if(b.z<=c.x && b.y<=c.y && b.x<=c.z){
        return true;
    }
    if(b.z<=c.x && b.x<=c.y && b.y<=c.z  ){
        return true;
    }
    return false;
}

int x;
box boxes[1000];

void solve(box b){
    FOR(i,0, x){
        if(canFit(b, boxes[i])){
            cout << boxes[i].v << endl;
            return;
        }
    }
    cout << "Item does not fit." << endl;
    return;
}

void setIO(string name = "") {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    if ((int)name.size()) {
        freopen((name+".in").c_str(), "r", stdin);
        freopen((name+".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO();
    cin >> x;
    FOR(i,0,x){
        cin >> boxes[i].x >> boxes[i].y >> boxes[i].z;
        boxes[i].v = boxes[i].x* boxes[i].y* boxes[i].z;
    }
    sort(boxes,boxes+x, cmp);
    int n;
    cin >> n;
    FOR(i,0,n){
        box t;
        cin >> t.x >> t.y >> t.z;
        solve(t);
    }
}