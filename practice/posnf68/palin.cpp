#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s;
    int n=0;
    string ans;
    cin >>s;
    for (char c:s){
        if ((97<=c&&c<=97+25) || (48 <=c&&c <= 48+9)){
            cout << 0;
            return 0;
        }
    }
    for (int i = 0;i < s.length();i++){
        for (int j = i;j < s.length();j++){
            string t = s.substr(i,j-i+1);
            string t2 = t;
            reverse(t.begin(),t.end());
            if (t2 == t&&t.length() > n){
                n = t.length();
                ans = t2;
            }
        }
    }
    cout << n << "\n" << ans;
    return 0;
}