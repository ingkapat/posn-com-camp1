#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    string s;
    vector<char> list;
    cin >> s;
    sort(s.begin(),s.end());
    s.push_back(' ');
    for (int i = 0;i < s.length();i++){
        if (s[i] == s[i+1]||s[i] == s[i-1]){
            continue;
        }
        cout << s[i];
        return 0;
    }
    return 0;
}