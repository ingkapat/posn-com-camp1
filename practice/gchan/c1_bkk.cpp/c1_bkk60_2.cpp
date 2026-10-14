#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;  //n*2 -1
    int a = n;
    vector<vector<char>> arr(n+n+10, vector<char> (n*2+(n-1)*2+1+10));
    int row = n+n-1;
    int collum = n*2+(n-1)*2+1; 
    for (int i = 0;i < row;i++){
        for (int j = 0;j < collum;j++){
            arr[i][j] = ' ';
        }
    }
    int b = 0;
    for (int i = 0;i < row;i++){
        for (int j = 0;j < collum;j++){
            if (j == 0+b||j == n*2-2-b) arr[i][j] = 'A' + a - 1;
            else if (j == n*2+b||j == n*2+(n-1)*2-b) arr[i][j] = '*';
        }
        if (i < row/2){
            b++;
            a--;
        }
        else if (i == row/2){
            b=n-2;
            a=2;
        }
        else {
            b--;
            a++;
        }
        
    }
    for (int i = 0;i < row;i++){
        for (int j = 0;j < collum;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }
    return 0;
}