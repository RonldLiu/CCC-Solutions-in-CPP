#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b, c;
    vector<pair<char,char>> map;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    for(int i = 0; i < 26; i++){
        map.push_back(make_pair(65+i,'.'));//0-25
    }
    map.push_back(make_pair(32, '.'));//26
    for(int i = 0; i < a.size(); i++){
        if(b.at(i)==32) {
            map.at(26).second = a.at(i);
        }else {
            map.at(b.at(i) - 65).second = a.at(i);
        }
    }
    for(int i = 0; i < c.size(); i++){
        if(c.at(i)==32){
            cout<<map.at(26).second;
        }else {
            cout<<map.at(c.at(i)-65).second;
        }

    }
    return 0;
}