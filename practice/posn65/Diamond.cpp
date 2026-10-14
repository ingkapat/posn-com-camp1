#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,ca;
    char ch;
    cin >> n >> ca >> ch;
    if (n % 2 ==0)n++;
    if (ca == 2){
        vector<vector<char>> arr(n,vector<char>(n,' '));
        int l = n/2,r = n/2;
        for (int i = 0;i <= n/2;i++){
            for (int j = 0;j < n;j++){
                if (l <= j&&j <= r){
                    arr[i][j] = ch;
                    arr[n-i-1][j] = ch;
                }
            }
            l--;
            r++;
        }
        for (int i = 0;i < n;i++){
        for (int j = 0;j < n;j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }
    }
    else if (ca == 3){
        vector<vector<char>> arr(n,vector<char>(n,ch));
        int l = n/2,r = n/2;
        for (int i = 0;i <= n/2;i++){
            for (int j = 0;j < n;j++){
                if (l < j&&j < r){
                    arr[i][j] = ' ';
                    arr[n-i-1][j] = ' ';
                }
            }
            l--;
            r++;
        }
        for (int i = 0;i < n;i++){
        for (int j = 0;j < n;j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }
    }
    else {
        vector<vector<char>> arr(n,vector<char>(n,' '));
        int l = n/2,r = n/2;
        for (int i = 0;i <= n/2;i++){
            for (int j = 0;j < n;j++){
                if (l == j||j == r){
                    arr[i][j] = ch;
                    arr[n-i-1][j] = ch;
                }
            }
            l--;
            r++;
        }
        for (int i = 0;i < n;i++){
        for (int j = 0;j < n;j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }
    }
    return 0;

}