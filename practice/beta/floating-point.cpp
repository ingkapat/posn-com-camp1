#include <bits/stdc++.h>
using namespace std;

int main(){
    int q,num;
    scanf("%d",&q);
    for (int i =0;i < q;i++){
        scanf("%d",&num);
        printf("%.0Lf\n",powl(2.0L,num));
    }
    return 0;
}