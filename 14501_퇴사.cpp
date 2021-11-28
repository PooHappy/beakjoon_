//#include <bits/stdc++.h>
//
//using namespace std;
//
//int dp[16];
//int day[16];
//int pay[16];
//int main(void) {
//	int n, t, p;
//	cin >> n;
//
//	//Initialize
//	fill(dp, dp + 16, 0);
//	fill(day, day + 16, 0);
//	fill(pay, pay + 16, 0);
//
//	//Input
//	for(int i = 0 ; i < n ; i++) {
//		cin >> t >> p;
//		day[i] = t;
//		pay[i] = p;
//	}
//
//	//memoization
//	for (int i = n-1 ; i >= 0; i--) {
//		if (i + day[i] > n) {
//			continue;
//		}
//
//		int _result = dp[i];
//		for (int j = i + day[i]; j <= n; j++) {
//			_result = max(_result, dp[j] + pay[i]);
//		}
//		dp[i] = _result;
//	}
//	int _answer = 0;
//	for (int i = 0; i < n; i++) {
//		_answer = max(_answer, dp[i]);
//	}
//	cout << _answer;
// }