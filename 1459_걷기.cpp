//#include <bits/stdc++.h>
//
//typedef long long ll;
//using namespace std;
//
//int main(void) {
//	ll x, y, w, s;
//	ll result = 987654321;
//	cin >> x >> y >> w >> s;
//	//13 0 43 29
//	if (x > y)
//		swap(x, y);
//
//	//상하좌우로 움직이는게 유리
//	if (2 * w < s) {
//		result = (x + y) * w;
//	}
//
//	//대각선으로 움직이는게 좋되 현재 좌표에서 y 또는 x 좌표로 일직선으로 갈 수 있으면 한번에감
//	if (2 * w >= s && w < s) {
//		result = x * s + (y - x) * w;
//	}
//
//	//대각선으로 움직이는게 더 빠를 경우
//	if (w >= s) {
//		//(x+y)가 홀수면 w로 한번 추가해줘야함
//		if ((x + y) % 2 == 1)
//			result = (y-1) * s + w;
//		else
//			result = y * s;
//	}
//
//	cout << result;
// }