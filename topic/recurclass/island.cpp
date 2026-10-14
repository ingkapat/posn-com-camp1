#include <bits/stdc++.h>
using namespace std;
int n,m,arr[110][110];
void check(int i,int j){
    if (arr[i][j] == 0) return;
    if (i < 0 || j < 0 || i >= n || j >= m) return;
    
    arr[i][j] = 0;
    check(i+1,j);
    check(i-1,j);
    check(i,j+1);
    check(i,j-1);
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int sum = 0;
    cin >> n >> m;
    for (int i = 0;i< n;i++){
        for (int j = 0;j < m;j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0;i <n;i++){
        for (int j = 0;j < m;j++){
            if (arr[i][j] == 1){
                sum++;
                check(i,j);
            }            
        }
    }
    cout << sum;
    return 0;
}