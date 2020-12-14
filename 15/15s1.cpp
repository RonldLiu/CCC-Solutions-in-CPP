#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> nums;
int total;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        if(temp==0)  nums.pop_back();
        else nums.push_back(temp);
    }
    for(int i:nums) total+=i;
    cout << total;
    return 0;
}