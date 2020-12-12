#include <iostream>
using namespace std;
int convert(char c){
    if(c=='A'||c=='B'||c=='C'){
        return 2;
    }
    if(c=='D'||c=='E'||c=='F'){
        return 3;
    }
    if(c=='G'||c=='H'||c=='I'){
        return 4;
    }
    if(c=='J'||c=='K'||c=='L'){
        return 5;
    }
    if(c=='M'||c=='N'||c=='O'){
        return 6;
    }
    if(c=='P'||c=='Q'||c=='R'||c=='S'){
        return 7;
    }
    if(c=='T'||c=='U'||c=='V'){
        return 8;
    }
    if(c=='W'||c=='X'||c=='Y'||c=='Z'){
        return 9;
    }
}
int main() {
    int x;
    cin>>x;
    string numbers[x];
    for(int i = 0; i < x; i++){
        cin>>numbers[i];
    }
    for(int i = 0; i < x; i++){
        string num = numbers[i];
        int digits[10];
        int k = 0;
        for(int j = 0; j < num.size(); j++){
            if(isalpha(num[j])){
                digits[k] = convert(num[j]);
                k++;
            }else if(isdigit(num[j])){
                digits[k] = num[j]-48;
                k++;
            }
            if(k==10){
                break;
            }
        }
        cout<<digits[0]<<digits[1]<<digits[2]<<"-"<<digits[3]<<digits[4]<<digits[5]<<"-"<<digits[6]<<digits[7]<<digits[8]<<digits[9]<<endl;
    }
    return 0;
}