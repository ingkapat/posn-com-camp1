#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    string s1,s2;
    int rep[150] = {};
    cin >> s1;
    cin >> s2;
    if (s2.length() > s1.length()) swap(s1,s2);
    for (int i = 0;i < s2.length();i++){
        for (int j = 0;j < s1.length();j++){
            if (s2[i] == s1[j] && rep[s2[i]] == 0){
                rep[s2[i]] = 1;
                cout << s2[i] << " ";
                break;
            }
        }
    }
    return 0;
}