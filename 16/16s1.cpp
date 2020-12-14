#include <bits/stdc++.h>

using namespace std;

string a;
string b;
int frequencyA[26];
int frequencyB[26];
int numAst;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> a >> b;
    for(char c:a) frequencyA[c-'a']++;
    for(char c:b) {
        if (c == '*') numAst++;
        else frequencyB[c - 'a']++;
    }
    for (int i = 0; i <26; ++i) {
        if(frequencyA[i]<frequencyB[i]){
            cout << "N";
            return 0;
        }else numAst-=frequencyA[i]-frequencyB[i];
    }
    if(0==numAst)cout << "A";
    else cout << "N";
    return 0;
}