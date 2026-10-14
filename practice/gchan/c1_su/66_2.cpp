#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    char number[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    string six;
    vector<int> two;
    vector<int> eight;
    int sum = 0;
    cin >> six;
    for (int k = 0;k < six.length();k++){
        int i = 0;
        while (six[k] != number[i])i++;
        sum += i*pow(16,six.length()-k-1);
    }
    int faksum = sum;
    while (faksum != 0){
        two.insert(two.begin(),faksum % 2);
        faksum /= 2;
    }
    while (sum != 0){
        eight.insert(eight.begin(),sum % 8);
        sum /= 8;
    }
    for (int i:two) cout << i;
    cout << "\n";
    for (int i:eight) cout << i;
    return 0;
}