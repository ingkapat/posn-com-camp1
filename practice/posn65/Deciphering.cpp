#include <bits/stdc++.h>
using namespace std;


int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    vector<int> w(128),check(128);
    string sm,bg;
    cin >> n >> m;
    cin >> sm >> bg;
    for (int i = 0;i < n;i++){
        check[sm[i]]++;
    }
    for (int i = 0;i < n;i++){
        w[bg[i]]++;
    }
    int ans = 0;
    for (int i = 0;i <= m-n;i++){
        bool is = true;
        for (int j = 0;j < 128;j++){
            if (check[j] != w[j]){
                is = false;
                break;
            }
        }
        if (!is){
            if (i == m-n){
                continue;
            }
            w[bg[i]]--;
            w[bg[n+i]]++;
            continue;
        }
        ans++;
        if (i == m-n){
                continue;
            }
        w[bg[i]]--;
        w[bg[n+i]]++;
    }
    cout << ans;
    return 0;
}