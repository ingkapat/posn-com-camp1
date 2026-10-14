#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    map<string,int> check;
    int n;
    cin >> n;
    for (int i = 0;i < n;i++){
        string s;
        cin >> s;
        check[s]++;
    }
    for (auto x:check){
        cout << x.first << " " << x.second <<'\n';
    }
    return 0;
}