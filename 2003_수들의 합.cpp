//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main(void) {
//	int n, m;
//	cin >> n >> m;
//	int* arr = new int[n + 1];
//	
//
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	int lo = 0, hi = 0;
//	int _cnt = 0;
//	while (lo != n  && hi != n) {
//		int _sum = 0;
//		for (int i = lo; i <= hi; i++) {
//			_sum += arr[i];
//		}
//		if (_sum == m)
//			_cnt++;
//		if (_sum < m) {
//			hi++;
//		}
//		else {
//			lo++;
//		} 
//	}
//	cout << _cnt;
//}