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
set<string> ans;
int length;
void solve(string s, int numOfOne){
    if(numOfOne==0){
        ans.insert(s);
        return;
    }
    for(int i = 0; i < length; i++){
        if(s.at(i)=='0'){
            s.replace(i,1,"1");
            solve(s ,numOfOne-1);
            s.replace(i,1,"0");
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while(t--) {
        ans.clear();
        int numOfOne;
        cin >> length >> numOfOne;
        string empty = "";
        for (int i = 0; i < length; i++) {
            empty += "0";
        }
        solve(empty, numOfOne);
        cout << "The bit patterns are"<<endl;
        vector<string> a;
        for (string s:ans) {
            a.push_back(s);
        }
        for(int i = a.size(); i > 0; i--){
            cout << a.at(i-1) << endl;
        }
        cout << endl;
    }
    return 0;
}