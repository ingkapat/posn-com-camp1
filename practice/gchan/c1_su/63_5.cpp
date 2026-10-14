#include <iostream>
using namespace std;

int main(){
    string s;
    int sex,age,marry;
    getline(cin,s);
    cin >> sex >> age >> marry;
    if (sex == 0){
        if (age <= 15){
            cout << "Miss ";
        }
        else {
            if (marry){
                cout << "Mrs. ";
            }
            else {
                cout << "Miss ";
            }
        }
    }
    else if (sex == 1){
        if (age <= 15){
            cout << "Master ";
        }
        else {
            cout << "Mr. ";
        }
    }
    cout << s;
    return 0;
}