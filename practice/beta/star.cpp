#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,center;
    scanf("%d",&n);
    if (n % 2 == 0){
        m = n-1; //3
        center = m / 2; //1
    }
    else {
        m = n; //5
        center = m / 2; //2
    }
    char arr[n+1][m+1];
    for (int i = 0;i < n;i++){
        for (int j = 0;j < m;j++){
            arr[i][j] = '-';
        }
    }
    for (int i = 0;i < n;i++){
        if (i < n/2){
            arr[i][center - i] = '*';
            arr[i][center + i] = '*';
        }
        else if (n % 2 != 0) {
            arr[i][abs(center - i)] = '*';   // 2,0    3,1   4,3
            arr[i][m - 1 - abs(center - i)] = '*';
            
        }
        else if (n % 2 == 0){
            arr[i][abs(center - i + 1)] = '*';
            arr[i][m -1 - abs(center - i + 1)] = '*';
        }
    }
    for (int i = 0;i < n;i++){
        for (int j = 0;j < m;j++){
            printf("%c",arr[i][j]);
        }
        cout << "\n";
    }
    return 0;
}