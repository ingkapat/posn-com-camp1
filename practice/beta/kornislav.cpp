#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5],k;
    for (int i = 0;i < 4;i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 0;j< 3;j++){
        for (int i = 0;i < 4;i++){
            if (arr[i] > arr[i+1]){
            k = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = k;
            }
        }
    }
    printf("%d",arr[0]*arr[2]);
    return 0;
}