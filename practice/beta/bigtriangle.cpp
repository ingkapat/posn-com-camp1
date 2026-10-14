#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<vector<double>> arr;
    double n,k1,k2,max = -1;
    cin >> n;
    for (int i = 0;i < n;i++){
        cin >> k1 >> k2;
        arr.push_back({k1, k2});
    }

    for (int i = 0;i < n;i++){
        for (int j = 0;j < n;j++){
            if (i == j)continue;
            for (int k = 0;k < n;k++){ //
                if (k == j || k == i)continue;
                if (abs(arr[i][0]*arr[j][1] + arr[j][0]*arr[k][1] + arr[k][0]*arr[i][1] - arr[i][1]*arr[j][0] - arr[j][1]*arr[k][0] -arr[k][1]*arr[i][0])/2 > max){
                    max = abs(arr[i][0]*arr[j][1] + arr[j][0]*arr[k][1] + arr[k][0]*arr[i][1] - arr[i][1]*arr[j][0] - arr[j][1]*arr[k][0] -arr[k][1]*arr[i][0])/2;
                }
            }
        }
    }
    printf("%.3f",max);
    return 0;
}