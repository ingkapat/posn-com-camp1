#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int num[1000] = {};
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    for (int i = 0;i < s.length();i++){
        if (num[s[i]] != 1){
            cout << s[i] << " ";
            num[s[i]] = 1;
        }
    }
    return 0;
}