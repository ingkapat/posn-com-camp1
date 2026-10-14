#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,arr[3][3][3],ans[3][3][3];
    cin >> n;
    n/=90;
    for (int i =0;i<3;i++){
        for (int j =0;j <3;j++){
            for (int k = 0;k < 3;k++){
                cin >> arr[i][j][k];
            }
        }
    }
    for (int num = 0;num < n;num++){
        for (int i =0;i <3;i++){
            for (int j = 0;j <3;j++){
                for (int k = 0;k < 3;k++){ // 00=20 10=21 20=22, 01=10 11=11 21=12, 02=00 12=01 22=02  
                    //cout << i << " " << k << j << "=" << 2-j << k << " , ";
                    ans[i][k][j] = arr[i][2-j][k];
                }
            }
        }
        for (int i =0;i <3;i++){
            for (int j = 0;j <3;j++){
                for (int k =0;k < 3;k++){
                    arr[i][j][k] = ans[i][j][k];
                }
            }
        }
    }
    for (int i =0;i<3;i++){
        for (int j =0;j <3;j++){
            for (int k = 0;k < 3;k++){
                cout << arr[j][i][k] << " ";
            }
            cout << ' ';
        }
        cout << "\n";
    }

    return 0;
}