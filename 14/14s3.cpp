#include <bits/stdc++.h>

#define FOR(i,a,b) for (int i = a; i < b; i++)
#define pb push_back

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<string, int> si;
typedef vector<ii> vii;
typedef vector<si> vsi;
typedef long long ll;
typedef vector<ll> vll;

void setIO(string name = "") { // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    if (sizeof(name)) {
        freopen((name+".in").c_str(), "r", stdin); // see Input & Output
        freopen((name+".out").c_str(), "w", stdout);
    }
}


stack<int> a;
stack<int> s;
int n;
int t;

bool solve(int num){
    int b = num;
    if(num > n){
        return true;
    }
    if(!a.empty() && a.top()==num){
        a.pop();
        b++;
        return solve(b);
    } else if(!s.empty() && s.top()==num){
        s.pop();
        b++;
        return solve(b);
    } else if(a.size()>0){
        s.push(a.top());
        a.pop();
        return solve(num);
    } else{
        return false;
    }
}

int main() {
    cin >> t;
    while(t--){
        cin >> n;
        while(!a.empty()){
            a.pop();
        }
        while(!s.empty()){
            s.pop();
        }
        for(int i = 0; i < n; i++){
            int p;
            cin >> p;
            a.push(p);
        }
        if(solve(1)){
            cout << "Y" << endl;
        }else{
            cout << "N" << endl;
        }
    }
}