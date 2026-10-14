#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    vector<vector<int>> arr(n,vector<int>(n));
    for (int i = 0;i < n;i++){
        string s;
        cin >> s;
        for (int j = 0;j < n;j++){
            arr[i][j] = s[j] - '0';
        }
    }
    
    return 0;
}