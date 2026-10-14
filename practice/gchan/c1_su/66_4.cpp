#include <iostream>
using namespace std;

int main(){
    int day,week,birth;
    bool check = false;
    int arr[8][9] = {};
    cin >> day >> week >> birth;
    int cur = 1,ai,aj;
    for (int i = 0;i < 8;i++){
        for (int j = 0;j < 9;j++){
            if (i == 0||i == 7||j == 0||j == 8) continue;
            if (cur > day) {
                break;
            }
            if (cur == birth){
                ai = i;
                aj = j;
            }
            if (check){
                arr[i][j] = cur;
                cur++;
            }
            else if (i == 1 && j == week){
                arr[i][j] = cur;
                ++cur;
                check = true;
            }

        }
    }
    int sum = arr[ai][aj-1] + arr[ai][aj+1] + arr[ai-1][aj] + arr[ai+1][aj];
    cout << sum;
    return 0;
}