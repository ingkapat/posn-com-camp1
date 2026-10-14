#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    vector<pair<int,int>> yes;
    vector<pair<int,int>> no;
    char hi,ki;
    int r;
    cin >> hi >> ki >> r;
    int h = hi-'0';
    int k = ki-'0';
    for (int i =0;i < 3;i++){
        string s;
        cin >> s;
        int x, y;
        if (s[0] == '-') {
            x = -(s[1] - '0');
            if (s[2] == '-'){
                y = -(s[3] - '0');
            }
            else y = s[2] - '0';
        } else {
            x = s[0] - '0';
            if (s[1] == '-'){
                y = -(s[2] - '0');
            }
            else y = s[1] - '0';
        }
        if ((x-h)*(x-h)+(y-k)*(y-k) <= r*r){
            yes.push_back({x,y});
        }
        else no.push_back({x,y});
    }
    cout << "YES\t";
    for (auto k:yes){
        cout << "(" << k.first << "," << k.second << ")";
    }
    cout << '\n';
    cout << "NO\t";
    for (auto k:no){
        cout << "(" << k.first << "," << k.second << ")";
    }
    return 0;
}