#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int m,d,sum = 0;
    cin >> m >> d;
    if (m <= 8){
        for (int i = m;i < 8;i++){
            sum+=month[i];
        }
        sum += (11+d);
        sum %= 7;
        if (sum == 0) sum = 7;
    }
    else{
        for (int i = m-1;i > 8;i--){ 
            sum-=month[i];
        }
        sum-=(19-d+1);
        sum %= 7;
        if (sum < 0) sum += 7;
    }
    cout << sum;
    return 0;
}