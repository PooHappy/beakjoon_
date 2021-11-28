//#include <bits/stdc++.h>
//
//using namespace std;
//
//int dp[30];
//int main(void) {
//	int n;
//	cin >> n;
//	dp[0] = 1;
//	dp[1] = 0;
//	dp[2] = 3;
//	dp[3] = 0;
//	for (int i = 4; i <= n; i++) {
//		dp[i] = dp[i - 2] * 3;
//
//		for (int j = 4; j <= i; j+=2) {
//			dp[i] += 2 * dp[i - j];
//		}
//	}
//	cout << dp[n];
//}