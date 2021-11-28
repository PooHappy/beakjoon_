//#include <bits/stdc++.h>
//
//using namespace std;
//
//int parent[1000001];
//
//int getParent(int x) {
//	if (parent[x] == x)
//		return parent[x];
//	else
//		return parent[x] = getParent(parent[x]);
//}
//void unionParent(int x, int y) {
//	x = getParent(x);
//	y = getParent(y);
//
//	if (x < y)
//		parent[y] = x;
//	else
//		parent[x] = y;
//}
//int find(int x, int y) {
//	x = getParent(x);
//	y = getParent(y);
//
//	if (x == y)
//		return 1;
//	else
//		return 0;
//}
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 0; i < n + 1; i++) {
//		parent[i] = i;
//	}
//
//	while (m--) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		//merging
//		if (a == 0) {
//			unionParent(b, c);
//		}
//		//check
//		else {
//			if (find(b, c)) {
//				cout << "YES" << '\n';
//			}
//			else {
//				cout << "NO" << '\n';
//			}
//		}
//	}
//}