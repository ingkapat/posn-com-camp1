#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int d,m,y,sum = 0;
    int month[] = {1,3,5,7,8,10,12};
    string dayweek[] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    cin >> d >> m >> y;
    if ((y %4 != 0 || y % 100 == 0) && y % 400 != 0){
        if (m == 2 && d > 28) cout << "Invalid date";
        return 0;
    }
   
    for (int i = 0;i < 7;i++){
        if (i == 6){
            if (sum == 6 && d > 31) {cout << "Invalid date";return 0;}
            else if (d > 30) {cout << "invalid date";return 0;}
            
        }
        else if (m != month[i]) sum++;

    }
    if (m <= 2){
        m+=12;
        y--;
    }
    int week = (d + (13 * (m + 1)) / 5 + (y%100) + (y%100) / 4 + (y/100) / 4 + 5 * (y/100)) % 7;
    cout << dayweek[week];
    return 0;
}