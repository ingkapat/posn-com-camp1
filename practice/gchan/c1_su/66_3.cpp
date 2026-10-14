#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s[4];
    string n;
    cin >> n;
    for (char c:n){
        int num = (int)(c - '0');
        if (num == 1){
            s[0].append("    ");
            s[1].append(" *  ");
            s[2].append("    ");
        }
        else if (num == 2){
            s[0].append(" *  ");
            s[1].append("    ");
            s[2].append(" *  ");
        }
        else if (num == 3){
            s[0].append("*   ");
            s[1].append(" *  ");
            s[2].append("  * ");
        }
        else if (num == 4){
            s[0].append("* * ");
            s[1].append("    ");
            s[2].append("* * ");
        }
        else if (num == 5){
            s[0].append("* * ");
            s[1].append(" *  ");
            s[2].append("* * ");
        }
        else if (num == 6){
            s[0].append("* * ");
            s[1].append("* * ");
            s[2].append("* * ");
        }
        else {
            s[0].append("    ");
            s[1].append("    ");
            s[2].append("___ ");
        }
    }
    for (int i = 0;i < 3;i++){
        cout << s[i] << "\n";
    }
    return 0;
}