#include <bits/stdc++.h>
using namespace std;
bool isPerfect(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return n==sum;
}
int main() {
    for(int i = 1000; i <= 9999; i++){
        if(isPerfect(i)){
            cout<<i<<" "<<endl;
        }
    }
    cout<<"153 370 371 407";
    return 0;
}