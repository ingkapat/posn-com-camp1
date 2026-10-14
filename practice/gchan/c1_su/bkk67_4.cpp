#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    cin >> n; // กย30 ตค31 พย30 ธค31 = 122
    n-=(122+12);
    n %= 7;
    if (n <= 0) n+=7;
    cout << n;
    return 0;
}