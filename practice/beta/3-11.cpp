#include "bits/stdc++.h"
using namespace std;

int main(){
    char n[1000010];
    int num=0,mat=0,frac,three;
    scanf("%s",n);
    for (int i = 0;n[i] !=  '\0';i++){ //123
        num++;
        n[i] -= '0';
    }
    int k = 0;
    for (int i = 0;i < num;i++){
        mat += n[i];
        mat = mat % 11;
        frac = mat;
        mat = mat*10;
    }
    mat = 0;
    for (int i = 0;i < num;i++){
        mat += n[i];
        mat = mat % 3;
        three = mat;
        mat = mat*10;
        }
    }
    printf("%d %d",three,frac);
    return 0;
}