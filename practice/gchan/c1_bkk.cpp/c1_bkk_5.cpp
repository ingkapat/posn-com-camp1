#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int m,d;
    cin >> m >> d;
    if (m <= 8){
        for (int i = m;i < 8;i++){
            d+=month[i];
        }
        d += 11;
        d %= 7;
        if (d == 0){
            d = 7;
        }
        cout << d;
    }
    else{
        for (int i = m-1;i > 8;i--){
            d-=month[i];
        }
        d-=20;
        d%=7;
        if (d < 7) d+=7;
        if (d == 0) d = 7;
        cout << d;
    }
    return 0;
}