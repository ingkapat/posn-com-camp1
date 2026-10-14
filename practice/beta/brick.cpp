#include <bits/stdc++.h>
using namespace std;


int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n,m,drop;
    cin >> n >> m;
    char arr[n+1][m+1];
    for (int i = 0;i < n;i++){
        for (int j =0;j < m;j++){
            cin >> arr[i][j];
        }
    }
    
    for (int i =0;i < m;i++){ //0 1 2 3 4
        cin >> drop;
        for (int j = 0;j < n;j++){  //0 1 2 3 4 5 6 7
            if (drop == 0 || arr[0][i] == '#' || arr[0][i] == 'O') break;
            if (arr[j][i] == 'O'){
                arr[j-1][i] = '#';
                drop--;
                j=0;
            }
            else if (arr[j][i] == '#'){
                arr[j-1][i] = '#'; 
                drop--;
                j=0;
            }
            else if (j == n-1){
                arr[j][i] = '#';
                drop--;
                j=0;
            }
        }

    }
    for (int i = 0;i < n;i++){
        for (int j =0;j < m;j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;

}