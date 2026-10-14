#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n+1] = {};
    int k = 2,c = 0;
    while (1){
        if (!arr[k]){
            for (int i = k;i <= n;i+=k){
                if (!arr[i]){
                    arr[i] = 1;
                    c++;
                    if (c == m){
                        printf("%d",i);
                        return 0;
                    }
                }
            }
        }
        k++;
    }
    return 0;
}