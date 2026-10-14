#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int row,col,arr[100][100];
    cin >> row >> col;
    if (row != col){
        cout << "can't find det";
        return 0;
    }
    int sum = 1;
    for (int i = 0;i < row;i++){
        for (int j = 0;j < col;j++){
            cin >> arr[i][j];
        }
    }
    int sbelow = 0,sup = 0;
    for (int j = 0;j < col;j++){
        int below = 1;
        for (int i = 0;i < row;i++){
            below*= arr[i][(i+j)%row];
        }
        sbelow+=below;
    }
    for (int j = 0;j < col;j++){
        int up = 1;
        for (int i = row-1,k = 0;i >= 0&&k<row;i--,k++){
            up*= arr[i][(k+j)%row];
        }
        sup+=up;
    }
    cout << "det=" << sbelow - sup;
    return 0;
}