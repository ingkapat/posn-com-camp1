#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    int n,sum =0,max = 0;
    char arr[1000][1000];
    vector<int> num;
    cin >> n;
    for (int k = 0;k < n;k++){
        int a;
        cin >> a;
        num.push_back(a);
        if (a > max) max = a;
        sum += a;
    }
    for (int i = 0;i < max;i++){
        for (int j = 0;j < sum*2;j++){
            arr[i][j] = ' ';
        }
    }
    int temp = 0;
    for (int k = 0;k < n;k++){
        for (int i = 0;i < num[k];i++){
            arr[i][temp] = '\\';
            temp++;
        }  
            
        for (int i = num[k] -1;i >= 0;i--){
            arr[i][temp] = '/';
            temp++;
        }
    }
    for (int i = 0;i < max;i++){
        for (int j = 0;j < sum*2;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }
    return 0;
}