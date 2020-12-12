#include <bits/stdc++.h>
using namespace std;
int main() {
    vector< pair<int, string> > cities;
    string name;
    int temp;
    while(cin>>name){
        cin >> temp;
        cities.push_back(pair<int, string>(temp, name));
        if(name == "Waterloo"){
            break;
        }
    }
    sort(cities.begin(), cities.end());
    cout<<cities[0].second;
}