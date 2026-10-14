#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,m,ma[100][100],mb[100][100],ans[100][100];
    cin >> n >> m;
    for (int i = 0;i < n;i++){
        for (int j = 0;j < m;j++){
            cin >> ma[i][j];
        }
    }
    for (int i = 0;i < m;i++){
        for (int j = 0;j < n;j++){
            cin >> mb[i][j];
        }
    }
    for (int i = 0;i < n;i++){ //00*00 01*10 02*20, 00*01 01*11 02*21 /  10*00 11*10 12*20, 10*01 11*11 12*21
        for (int k = 0;k <n;k++){
            int sum = 0;
            for (int j = 0;j < m;j++){
                sum+= (ma[i][j] * mb[j][k]);
            }
            ans[i][k] = sum;
        }
    }       
    for (int i = 0;i < n;i++){
        for (int j = 0;j < n;j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}