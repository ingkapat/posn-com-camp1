#include <bits/stdc++.h>
using namespace std;
vector<string> arr;
int found[10][10] = {};
int col,row;

void recur(int i,int j){
    if (found[i][j] == 1) return;
    else if (i >= row||i < 0||j >= col||j < 0) return;
    else if (arr[i][j] == '0') return;
    found[i][j] = 1;
    recur(i+1,j);
    recur(i,j+1);
    recur(i,j-1);
    recur(i+1,j+1);
    recur(i+1,j-1);
    recur(i-1,j+1);
    recur(i-1,j-1); ur(i-1,j);
    rec
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    int it = s.find('x');// 0 1 2 x 4
    col = stoi(s.substr(0,it));
    row = stoi(s.substr(it+1));
    arr.resize(row);
    for (int i = 0;i < row;i++){
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0;i < row;i++){
        for (int j = 0;j < col;j++){
            if (arr[i][j] == '1' && !found[i][j]){
                recur(i,j);
                sum++;
            }
        }
    }
    if (sum > 1||sum == 0){
        cout << 0;
        return 0;
    }
    int ans = 0;
    for (int i = 0;i < row;i++){
        for (int j = 0;j < col;j++){
            if (arr[i][j] == '1'){
                if (i+1 == row||arr[i+1][j] == '0') ans++;
                if (i-1 == -1||arr[i-1][j] == '0') ans++;
                if (j+1 == col||arr[i][j+1] == '0') ans++;
                if (j-1 == -1||arr[i][j-1] == '0') ans++;
            }
        }
    }
    cout << ans;
    return 0;
}