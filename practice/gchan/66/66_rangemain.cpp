#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,max = -1000000,sum = 0,min = 1000000;
    cin >> n;
    for (int i = 0;i < n;i++){
        int num;
        cin >> num;
        if (num > max) max = num;
        if (num < min) min = num;
        sum += num;
    }
    cout << max-min << " " << fixed << setprecision(2) << sum/double(n);
    return 0;
}