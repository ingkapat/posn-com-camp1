#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n,m;
	cin >> n >> m;
	vector<bool> prime(m+6,true);
	prime[0] = false;
	prime[1] = false;
	for (int i = 0;i <= sqrt(m+6);i++){
		if (prime[i]){
			for (int j = i*i;j <= m+6;j+=i){
				prime[j] = false;
			}
		}
	}
	int twin=0,cousin = 0,sexy =0;
	for (int i = n;i <= m;i++){
		if (!prime[i]) continue;
		if ((i >= 2 && prime[i-2]) || prime[i+2]) twin++;
		if ((i >= 4 && prime[i-4]) || prime[i+4]) cousin++;
		if ((i >= 6 && prime[i-6]) || prime[i+6]) sexy++;
	}
	cout << twin << '\n' << cousin << '\n' << sexy;
	return 0;
}