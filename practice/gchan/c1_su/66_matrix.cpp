#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    int arr[210][210] = {};
    for (int i = 1;i < n;i++){
        for (int j = 0;j < i;j++){
            int num;
            cin >> num;
            arr[i][j] = num;
            arr[j][i] = num;
        }
    }
    for (int i = 0;i < n;i++){
        for (int j = 0;j < n;j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}