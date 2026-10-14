#include "bits/stdc++.h"
using namespace std;

int main(){
    int n = 1;
    string s;
    cin >> s;
    for (int i = 0;i<s.length();i++){
        if (s[i] == 'A'){
            if (n == 1){
                n = 2;
            }
            else if (n == 2){
                n = 1;
            }
        }
        else if (s[i] == 'B'){
            if (n == 2){
                n = 3;
            }
            else if (n == 3){
                n = 2;
            }
        }
        else if (s[i] == 'C'){
            if (n == 1){
                n = 3;
            }
            else if (n == 3){
                n = 1;
            }
        }
    }
    printf("%d",n);
    return 0;
}