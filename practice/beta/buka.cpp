#include <bits/stdc++.h>
using namespace std;

int main(){
    char a[110],b[110],c,k = 0,l = 0;
    scanf("%s %c %s",a,&c,b);
    for (int i = 0;a[i] != '\0';i++){
            if (a[i] == '0')k++;
    }
    for (int i = 0;b[i] != '\0';i++){
            if (b[i] == '0')l++;
    }
    if (c == '+'){
        if (k > l){
            printf("1");
            for (int i = 0;i < k;i++){
                if (i == k - l -1 ) printf("1");
                else printf("0");
            }
        }
        else if (l > k){
            printf("1");
            for (int i = 0;i < l;i++){
                if (i == l - k - 1) printf("1");
                else printf("0");
            }
        }
        else {
            printf("2");
            for (int i = 0;i < l;i++){
                printf("0");
            }
        }
    }
    else if (c == '*'){
        printf("1");
        for (int i = 0;i < (k+l);i++) printf("0");
    }
    return 0;
}