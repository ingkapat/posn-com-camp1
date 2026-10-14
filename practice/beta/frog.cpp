#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;   
    if (x > y){
        cout << 2;
        return 0;
    }                                  
    if (y % x == 0){
        cout << y / x;
    }
    else {
        cout << y/x +1;
    }
    return 0;
}