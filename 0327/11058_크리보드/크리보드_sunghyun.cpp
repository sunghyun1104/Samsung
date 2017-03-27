#include <iostream>
#include <algorithm>
using namespace std;
long long dp[101];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		dp[i] = i;
	}
	for (int i = 3; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			dp[j] = max(dp[j], dp[i - 3] * (j - i + 2));
		}
	}
	cout << dp[n];
	return 0;
}