#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n;
    int max = 0;
    int m[10001] = {};
    for (int i = 0;i < n;i++){
        scanf("%d",&k);
        m[k]++;
    }
    for (int i = 0;i<=10000;i++){
        if (m[i] > max){
            max = m[i];
        }
    }
    for (int i = 0;i <= 10000;i++){
        if (m[i] == max){
            printf("%d ",i);
        }
    }
    return 0;
}