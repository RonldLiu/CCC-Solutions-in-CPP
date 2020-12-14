#include <bits/stdc++.h>

using namespace std;

int n;
int a[100001];
int b[100001];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int t;
        cin >> t;
        a[i] = a[i-1]+t;
    }
    for (int i = 1; i <= n; ++i) {
        int t;
        cin >> t;
        b[i] = b[i-1]+t;
    }
    for(int i = n; i >= 0; i--){
        if(a[i]==b[i]){
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}