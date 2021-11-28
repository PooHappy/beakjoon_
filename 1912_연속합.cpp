//#include <bits/stdc++.h>
//
//using namespace std;
//
//int dp[100001];
//int arr[100001];
//int main(void) {
//	int n, sum = 0;
//	int _max = -1001;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//		cin >> dp[i];
//
//	//dp가 모두 -가 아니면 sum을 0으로 만드는게 맞음.
//	//dp가 모두 -면 sum을 0으로 만들면 안됨.
//
//	for (int i = 0; i < n; i++) {
//		sum += dp[i];
//		if (sum > _max)
//			_max = sum;
//		if (sum < 0)
//			sum = 0;
//	}
//	cout << _max;
//}