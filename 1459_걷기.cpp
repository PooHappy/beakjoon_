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
//	//�����¿�� �����̴°� ����
//	if (2 * w < s) {
//		result = (x + y) * w;
//	}
//
//	//�밢������ �����̴°� ���� ���� ��ǥ���� y �Ǵ� x ��ǥ�� ���������� �� �� ������ �ѹ�����
//	if (2 * w >= s && w < s) {
//		result = x * s + (y - x) * w;
//	}
//
//	//�밢������ �����̴°� �� ���� ���
//	if (w >= s) {
//		//(x+y)�� Ȧ���� w�� �ѹ� �߰��������
//		if ((x + y) % 2 == 1)
//			result = (y-1) * s + w;
//		else
//			result = y * s;
//	}
//
//	cout << result;
// }