#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10],sum = 0,m,n;
    for (int i = 0; i< 9;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    for (int i = 0;i < 9;i++){
        for (int j = 0;j < 9;j++){
            if (sum - 100 == arr[i] + arr[j]){
                m = arr[i];
                n = arr[j];
                for (int k = 0;k < 9;k++){
                    if (arr[k] == m || arr[k] == n){
                        continue;
                    }
                    printf("%d\n",arr[k]);
                }
                return 0;
            }
        }
    }
    return 0;
}