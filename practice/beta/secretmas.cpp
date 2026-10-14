#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    scanf("%d",&n);
    string s;
    cin >> s;
    for (int i = 0;i < s.length();i++){
        k = (n + int(s[i])) % 26;
        s[i] = 'a' + k;

    }
    cout << s;
    return 0;
}