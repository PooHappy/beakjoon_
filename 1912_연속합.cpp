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
//	//dp�� ��� -�� �ƴϸ� sum�� 0���� ����°� ����.
//	//dp�� ��� -�� sum�� 0���� ����� �ȵ�.
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