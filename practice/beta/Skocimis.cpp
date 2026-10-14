#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,k1,k2;
    scanf("%d%d%d",&a,&b,&c);
    k1 = abs(a - b + 1);
    k2 = abs(b - c + 1);
    if (k1 > k2){
        printf("%d",k1);
    }
    else{
        printf("%d",k2);
    }
    return 0;
}