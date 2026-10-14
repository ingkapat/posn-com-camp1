#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a = 1,b=1;
    for (int i = 1;i < n;i++){
        long long temp = a;
        a = a+b;
        b = temp; 
    }
    cout << b;
}