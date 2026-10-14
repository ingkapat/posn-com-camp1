#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    long long sum = 0;
    long long mi = 1000000000;
    
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        sum += a;
        mi = min(mi, a);
    }
    
    if (n == 1) {
        cout << sum << '\n';
    } else {
        cout << sum - (2 * min_val) << '\n';
    }
    
    return 0;
}