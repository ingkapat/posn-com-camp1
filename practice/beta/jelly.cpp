#include <bits/stdc++.h>
using namespace std;

int findmax(int a,int b,int c){
    int max = a;
    if (b > max) max = b;
    else if (c > max) max = c;
    
    if (max == a) return 0;
    if (max == b) return 1;
    if (max == c) return 2;
}

int main(void){
    int arr[3],n=0;
    cin >> arr[0] >> arr[1] >> arr[2];
    while (arr[0] != 1 || arr[1] != 1 || arr[2] != 1){
        arr[findmax(arr[0],arr[1],arr[2])] /= 2;
        n++;
    }
    printf("%d",n);
    return 0;
}