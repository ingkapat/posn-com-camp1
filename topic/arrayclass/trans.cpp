#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int arr[10][10],ans[10][10];
    cout << "Matrix\n";
    for (int i = 0;i < 2;i++){
        for (int j = 0;j < 3;j++){
            cin >> arr[i][j];
        }
    }
    cout << "Transpose\n";
    for (int j = 0;j < 3;j++){
        for (int i = 0;i < 2;i++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}