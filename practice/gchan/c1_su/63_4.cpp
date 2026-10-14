#include <iostream>
using namespace std;

int main(){
    int n,date;
    int arr[40];
    bool check = true;
    cin >> n;
    for (int i = 0;i < n;i++){
        cin >> arr[i];
    }
    cin >> date;
    for (int i =0;i<n;i++){
        for (int j = i+1;j<n;j++){
            if (arr[i] + arr[j] == date){
                cout << arr[i] << " " << arr[j] << "\n";
                check = false;
            }
        }
    }
    if (check){
        cout << "No";
    }
    return 0;
}