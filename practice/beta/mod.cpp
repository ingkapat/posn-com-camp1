#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    int arr[42] = {};
    for (int i =0;i < 10;i++){
        cin >> n;
        arr[n % 42] = 1;
    }
    for (int i = 0;i < 42;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
}