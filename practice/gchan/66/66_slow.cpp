#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int num,before = 0;
    while (cin >> num,num >= 0){
        num += before;
        int out = 0;
        if (num >= 500){
            out += num/800;
            num%=800;
            if (num >= 500){
                out++;
                num=0;
            }
        }
        before = num;
        cout << out << "\n";
        
    }
    return 0;
}