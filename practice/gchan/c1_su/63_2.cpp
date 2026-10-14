#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int arr[310][310],ans[4] = {};
    int row,col,n;
    cin >> row >> col;
    for (int i = 1;i <= row;i++){
        for (int j = 1;j <= col;j++){
            cin >> arr[i][j];
        }
    }
    cin >> n;
    int h = 0,k=0;
    for (int i = 0;i < n;i++){
        int x,y;
        cin >> x >> y;
        if ((x <= 0||y <= 0||x > row||y>col)&&i==0){
            continue;
        }
        if (x <= 0||y <= 0||x > row||y>col){
            x = h;
            y = k;
        }
        if (arr[x][y] > 0) ans[0]++;
        if (arr[x][y] < 0) ans[1]++;
        if (arr[x][y] % 2 == 0) ans[2]++;
        if (arr[x][y] % 2 != 0) ans[3]++;
        h = x;
        k = y;
    }
    cout << ans[0] << " " << ans[1] << " "  << ans[2] << " " << ans[3] << "\n";
    return 0;
}