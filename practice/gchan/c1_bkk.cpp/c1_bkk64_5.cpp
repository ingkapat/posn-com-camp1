#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    string s;
    int r = 0;
    vector<string> str(3);
    cin >> s;
    for (char n : s){
        if (n > '6'){
            cout << "ERROR";
            return 0;
        }   
    }
    for (char n : s){
        int num = n - '0';
        if (num == 1){
            str[0].append("   ");
            str[1].append(" * ");
            str[2].append("   ");
            r++;
        }
        else if (num == 2){
            str[0].append("   ");
            str[1].append("* *");
            str[2].append("   ");
            r++;
        }
        else if (num == 3){
            str[0].append(" * ");
            str[1].append(" * ");
            str[2].append(" * ");
            r++;
        }
        else if (num == 4){
            str[0].append("* *");
            str[1].append("   ");
            str[2].append("* *");
            r++;
        }
        else if (num == 5){
            str[0].append("* *");
            str[1].append(" * ");
            str[2].append("* *");
            r++;
        }
        else if (num == 6){
            str[0].append("* *");
            str[1].append("* *");
            str[2].append("* *");
            r++;
        }
        if (r != s.length()){
            str[0].append("|");
            str[1].append("|");
            str[2].append("|");
        }
    }
    for (int i = 0;i<3;i++){
        cout << str[i] << "\n";
    }
    return 0;
}