#include <bits/stdc++.h>

using namespace std;

int t;

bool isPrime(int num) {
    for(int i = 2; i*i <= num; i++) if (num % i == 0) return false;
    return true;
}

string solve(int num){
    for(int j = 2; j < num; j++) if(isPrime(j)&&isPrime(num-j)) return to_string(j) + " " + to_string(num-j) + "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << solve(n*2);
    }
    return 0;
}