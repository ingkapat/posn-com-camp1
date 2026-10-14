#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6][5],sum = 0,win = 0,w;
    for (int i = 0;i < 5;i++){
        for (int j = 0;j < 4;j++){
            cin >> arr[i][j];
            sum+=arr[i][j];
        }
        if (win < sum){
            w = i + 1;
            win = sum;
        }
        sum = 0;
    }
    printf("%d %d",w,win);
    return 0;
}