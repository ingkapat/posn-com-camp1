#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int base;
    char num1[1000] = {} ,num2[1000] = {};
    cin >> base >> num1 >> num2;
    char arr[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G'};
    int a = 0,b = 0;
    while (num1[a] != '\0')a++;
    while (num2[b] != '\0')b++;
    int ma = max(a,b);
    for (int i = 0, j = a-1;i < j;i++,j--){
        char temp = num1[i];
        num1[i] = num1[j];
        num1[j] = temp;
    }
    for (int i = 0, j = b-1;i < j;i++,j--){
        char temp = num2[i];
        num2[i] = num2[j];
        num2[j] = temp;
    }

    for (int i = 0;i < ma;i++){
        int k = 0;
        if (num1[i] ==  0) continue;
        while (arr[k] != num1[i])k++;
        num1[i] = k;
    }
    for (int i = 0;i < ma;i++){
        int m = 0;
        if (num2[i] == 0) continue;
        while (arr[m] != num2[i])m++;
        num2[i] = m;
    }
    int plus = 0;
    for (int i = 0;i < ma;i++){
        int con = ((int)num1[i] + (int)num2[i] + plus) % base;
        if ((int)num1[i] + (int)num2[i] + plus >= base){
            plus = ((int)num1[i] + (int)num2[i] + plus) / base;
        }
        else plus = 0;
        num1[i] = con;
    }
    if (plus != 0) cout << arr[plus];
    for (int i = ma-1;i >= 0;i--){
        cout << arr[(int)num1[i]];
    }

    return 0;
}