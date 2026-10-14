#include "bits/stdc++.h"
using namespace std;

int main(){
    int n,l,a=0,b=0,g=0,max = 0;
    string str;
    cin >> n >> str;
    l = str.size();
    for (int i = 0;i < l;i++){
        if (i%3 == 0 && str[i] == 'A') a++;
        else if (i%3 == 1 && str[i] == 'B') a++;
        else if (i%3 == 2 && str[i] == 'C') a++;
        if (i%4 == 0 && str[i] == 'B') b++;
        else if (i%4 == 1 && str[i] == 'A') b++;
        else if (i%4 == 2 && str[i] == 'B') b++;
        else if (i%4 == 3 && str[i] == 'C') b++;
        if ((i%6 == 0 || i % 6 == 1) && str[i] == 'C') g++;
        else if ((i%6 == 2 || i % 6 == 3) && str[i] == 'A') g++;
        else if ((i%6 == 4 || i % 6 == 5) && str[i] == 'B') g++;
    }
    
    if (a > max) max = a;
    if (b > max) max = b;
    if (g > max) max = g;
    printf("%d\n",max);
    if (a == max){
        printf("Adrian\n");
    }
    if (b == max){
        printf("Bruno\n");
    }
    if (g == max){
        printf("Goran\n");
    }
    return 0;
}