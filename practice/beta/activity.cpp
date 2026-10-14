#include <bits/stdc++.h>
using namespace std;

int main(){
    long long arr[27][27] = {};
    // (0 0)  (1 0)=1  (1 1)=1 (2 0) (2 1) (2 2)
    arr[0][0] = 1;
    for (int i = 1;i <= 25;i++){
        for (int j = 0;j <= i;j++){
            arr[i][j] += arr[i-1][j];
            arr[i][j+1] += arr[i-1][j];
        }
    }
    
    int n;
    scanf("%d",&n);
    if (n%2==0){
        printf("%lld",arr[n][n/2]);
    }
    else{
        printf("%lld",arr[n][n/2]*2);
    }

    return 0;
}