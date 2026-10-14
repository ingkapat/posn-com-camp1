#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int k = 0;
    for (int i = 1;i <= s.size();i++){
        if (i % 3 == 0){
            printf("..*.");
        }
        else {
            printf("..#.");
        }
    }
    printf(".\n");
    for (int i = 1;i <=  s.size();i++){
        if (i % 3 == 0){
            printf(".*.*");
        }
        else {
            printf(".#.#");
        }
    }
    printf(".\n");
    for (int i = 1;i <=  s.size();i++){
        if (i % 3 == 0){
            printf("*.%c.*",s[i-1]);
            k=1;
        }
        else if (i % 3 == 1 && k == 1){
            printf(".%c.",s[i-1]);
            k=0;
        }
        else {
            printf("#.%c.",s[i-1]);
            k=0;
        }
    }
    if (s.size() % 3 != 0){
        printf("#");
    }
    printf("\n");
    for (int i = 1;i <=  s.size();i++){
        if (i % 3 == 0){
            printf(".*.*");
        }
        else {
            printf(".#.#");
        }
    }
    printf(".\n");
    for (int i = 1;i <= s.size();i++){
        if (i % 3 == 0){
            printf("..*.");
        }
        else {
            printf("..#.");
        }
    }
    printf(".\n");
    return 0;
}