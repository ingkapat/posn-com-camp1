#include <bits/stdc++.h>
using namespace std;

int main(){
    char c,a[210],b[210];
    int na = 0,nb = 0;
    scanf("%s %c %s",a,&c,b);
    while(a[na] != '\0'){na++;}
    while(b[nb] != '\0'){nb++;}

    for (int l = 0,r = na-1;l < r;l++,r--){
        int swap = a[l];
        a[l] = a[r];
        a[r] = swap;
    }
    for (int l = 0,r = nb-1;l < r;l++,r--){
        int swap = b[l];
        b[l] = b[r];
        b[r] = swap;
    }
    int i = 0;
    while(i < na){
        a[i] -= '0';
        i++;         
    }   
    i = 0;
    while(i < nb){
        b[i] -= '0';
        i++;  
    }
    if (c == '+'){
        if(max(na,nb) == na){
            for (int i = 0;i < nb;i++){
                a[i] += b[i];
                if(a[i] > 9){
                    int k = a[i] / 10;
                    a[i+1] += k;
                    a[i] -= 10*k;
                }
            }
            for (int i = nb;i < na;i++){
                if(a[i] > 9){
                    int k = a[i] / 10;
                    a[i+1] += k;
                    a[i] -= 10*k;
                }
            }
            for (int i = na-1;i >= 0;i--){
                printf("%d",a[i]);
            }

            
        }
        else if(max(na,nb) == nb){  
            for (int i = 0;i < na;i++){
                b[i] += a[i];
                if(b[i] > 9){
                    int k = b[i] / 10;
                    b[i+1] += k;
                    b[i] -= 10*k;
                }
            }
            for (int i = na;i < nb;i++){
                if(b[i] > 9){
                    int k = b[i] / 10;
                    b[i+1] += k;
                    b[i] -= 10*k;
                }
            }
            for (int i = nb-1;i >= 0;i--){
                printf("%d",b[i]);
            }
        }
    }



    return 0;
}