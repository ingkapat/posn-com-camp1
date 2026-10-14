#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    if (n == 1){
        printf("/\\");
    }
    else {for (int i = 1;i < n+1;i++){
        for (int j = 0;j < n - i;j++){
            printf(" ");
        }
        printf("/");
        if (i == n){
            for (int k = 0;k < 2 * (i-1);k++){
            printf("_");
            }
        }
        else {
            for (int j = 0;j < 2 * (i-1);j++){
            printf(" ");
            }
        }
        printf("\\");
        printf("\n");
    }}
    return 0;
}