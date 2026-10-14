#include "bits/stdc++.h"
using namespace std;

int main(){
    int n,x;
    cin >> n;
    int arr[100010] = {0};
    for (int i = 0;i < n;++i){
        cin >> x;
        arr[x]++;
    }
    int popc = 0,pop;
    for (int i = 1;i < 100000;++i){
        if (arr[i] > popc){
            pop = i;
            popc = arr[i];
        }
    }
    cout << pop;
    return 0;
}