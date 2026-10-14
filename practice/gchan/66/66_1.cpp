#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int a,b,x;
    cin >> a >> b >> x;
    a = a*b;
    int c = a,k = 0;
    while (c != 0){
        c/=10;
        k++;
    }
    if (k - x < 0){
        cout << "_";
        return 0;
    }
    cout << (a % (int)round(pow(10,k - x + 1)))/(int)round(pow(10,k-x));
    return 0;
}