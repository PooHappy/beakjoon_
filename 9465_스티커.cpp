//#include <bits/stdc++.h>
//
//using namespace std;
//
//int dp[3][100001];
//int main(void) {
//	int tc, n;
//	cin >> tc;
//	while (tc--) {
//		cin >> n;
//		fill_n(dp[0], 100001 * 3, 0);
//
//		for (int i = 0; i < 2; i++) {
//			for (int j = 0; j < n; j++) {
//				cin >> dp[i][j];
//			}
//		}
//
//		for (int j = 1; j < n; j++) {
//			for (int i = 0; i < 3; i++) {
//				if (i == 0) {
//					dp[i][j] = max(dp[i + 1][j - 1], dp[i + 2][j - 1]) + dp[i][j];
//				}
//				else if (i == 1) {
//					dp[i][j] = max(dp[i - 1][j - 1], dp[i + 1][j - 1]) + dp[i][j];
//				}
//				else {
//					dp[i][j] = max(dp[i - 2][j - 1], dp[i - 1][j - 1]);
//				}
//
//			}
//		}
//		cout << '\n';
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < n; j++) {
//				cout << dp[i][j] << " ";
//			}
//			cout << '\n';
//		}
//		int _result = 0;
//
//		for (int i = 0; i < 2; i++) {
//			for (int j = 0 ; j < n; j++) {
//				_result = max(_result, dp[i][j]);
//			}
//		}
//		cout << _result;
//	}
//} 