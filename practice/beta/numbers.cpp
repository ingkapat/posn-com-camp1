#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,zero = 0;
    scanf("%d",&n);
    int arr[n];
    for (int i =0;i<n;i++){
        scanf("%d",&arr[i]);
        if (arr[i] == 0) zero++;
    }
    for (int i = 0;i < n-1;i++){
        for (int j =0;j < n-1;j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    if (zero > 0){
        int c = 0;
        while (arr[c] == 0) c++;
        swap(arr[0],arr[c]);  
    }
    
    for (int i = 0;i< n;i++){
        printf("%d",arr[i]);
    }
}