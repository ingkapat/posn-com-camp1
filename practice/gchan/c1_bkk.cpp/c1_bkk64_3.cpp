#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    string s;
    int sum =0;
    cin >> s;
    for (int i = 0;i < s.length();i++){
        sum += (int)s[i] - '0';
    }
    cout << sum;
    return 0;
}