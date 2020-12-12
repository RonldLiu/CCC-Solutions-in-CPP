#include <bits/stdc++.h>
using namespace std;
int main() {
    int c, r;
    cin >> c >>r;
    int x = 0, y = 0;
    while(true){

        int vx, vy;
        cin >> vx >> vy;
        if(vx==0&&vy==0){
            break;
        }else{
            x+=vx;
            y+=vy;
        }
        if(x<0) x=0;
        if(y<0) y=0;
        if(x>c) x=c;
        if(y>r) y=r;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}