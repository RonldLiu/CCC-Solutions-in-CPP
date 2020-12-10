#include <bits/stdc++.h>

using namespace std;

int t, n;

bool isPrime(int n) {
    for(int i = 2; i*i <= n; i++) if (n % i == 0) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        n*=2;
        for(int j = 2; j < n; j++){
            if(isPrime(j)&&isPrime(n-j)){
                cout << j << " " << n-j << endl;
                break;
            }
        }
    }
    return 0;
}