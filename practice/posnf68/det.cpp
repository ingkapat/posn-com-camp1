#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,ans;
    string s;
    cin >> n >> s;
    if (n == 2){
        int sum1 = (s[0]-'0') * (s[3] - '0');
        int sum2 = (s[1]-'0') * (s[2] - '0');
        ans = sum1-sum2;
    }
    // 012
    // 345
    // 678
    else if(n==3){
        int sum1 = (s[0]-'0')*(s[4]-'0')*(s[8]-'0') + (s[1]-'0')*(s[5]-'0')*(s[6]-'0') + (s[2]-'0')*(s[3]-'0')*(s[7]-'0');
        int sum2 = (s[6]-'0')*(s[4]-'0')*(s[2]-'0') + (s[7]-'0')*(s[5]-'0')*(s[0]-'0') + (s[8]-'0')*(s[3]-'0')*(s[1]-'0');
        ans = sum1-sum2;
    }
    cout << ans;
}