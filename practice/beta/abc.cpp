#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,k;
    int n = 0;
    int arr[3];
    string str;
    for (int i = 0; i < 3;i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0;i < 2;i++){
        for (int j = 0;j < 2;j++){
            if (arr[j+1] < arr[j]){
                k = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = k;
            }
        }
    }
    cin >> str;
    for (int i = 0; i < 3;i++){
        if (str[i] == 'A'){
            printf("%d ",arr[0]);
        }
        else if (str[i] == 'B'){
            printf("%d ",arr[1]);
        }
        else if (str[i] == 'C'){
            printf("%d ",arr[2]);
        }
    }
    return 0;
}