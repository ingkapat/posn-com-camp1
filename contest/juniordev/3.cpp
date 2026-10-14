#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int type;
    string s,snew;
    cin >> s >> type;
    bool fi = true;
    for (int i =0;i< s.length();i++){
        if (97 <= s[i]&&s[i] <= 97+25){
            if (!fi) snew.push_back(tolower(s[i]));
            else if (fi){
                snew.push_back(toupper(s[i]));
                fi = false;
            }
        }
    }
    fi = true;
    for (int i =0;i< s.length();i++){
        if (65 <= s[i]&&s[i] <= 65+25){
            if (!fi) snew.push_back(tolower(s[i]));
            else if (fi){
                snew.push_back(toupper(s[i]));
                fi = false;
            }
        }
    }
    if (type == 0){
        cout << snew;
        return 0;
    }
    int size = 2;
    while (snew.length()>size*size)size++;
    char arr[size*3][size*3];
    for (int i = 0;i < size*3;i++){
        for (int j = 0;j < size*3;j++){
            arr[i][j] = '.';
        }
    }
    //bon
    int n = 1;
    for (int i = 0;i < size;i++){
        for (int j = size*2-1;j > size*2-1- n;j--){
            arr[i][j] = '#';
        }
        n++;
    }
    //lang
    n = 0;
    for (int i = size*2;i < size*3;i++){
        for (int j = size;j < size*2-n;j++){
            arr[i][j] = '#';
        }
        n++;
    }
    //sai
    n = 0;
    for (int i = size;i < size*2;i++){
        for (int j = n;j < size;j++){
            arr[i][j] = '#';
        }
        n++;
    }
    //kwa
    n = 0;
    for (int i = size;i < size*2;i++){
        for (int j = size*2;j < size*2+1 + n;j++){
            arr[i][j] = '#';
        }
        n++;
    }
    n = 0;
    for (int i = size;i < size*2;i++){
        for (int j = size;j < size*2;j++){
            if (snew[n] != '\0'){
                arr[i][j] = snew[n];
                n++;
            }
            else arr[i][j] = '=';
        }
    }
    for (int i = 0;i < size*3;i++){
        for (int j = 0;j < size*3;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }
    return 0;
}