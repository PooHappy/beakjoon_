#include <bits/stdc++.h>

using namespace std;

int n, s, r;
int team[11];
int damaged[11];
int redun[11];
int dx[2] = { -1, 1 };
int main(void) {
	cin >> n >> s >> r;

	//�� �� - �ջ� - ����
	//5 2 1
	//2 4
	//3
	fill(damaged, damaged + 11, 0);
	for (int i = 1; i <= s; i++) {
		int a;
		cin >> a;
		damaged[a] = -1;
	}
	for (int i = 1; i <= r; i++) {
		int a;
		cin >> a;
		redun[a] = 1;
	}
	// 0 1 2 3 4 5
	for (int i = 1; i <= n; i++) {

		//�ڰ�����
		if (damaged[i] == -1 && redun[i] == 1) {
			damaged[i] = 0;
			redun[i] = 0;
		}

		//�����ټ� ������?
		if (redun[i] > 0) {
			for (int j = 0; j < 2; j++) {
				int nx = i + dx[j];
				if (damaged[nx] == -1) {
					damaged[nx] = 0;
					redun[i] = 0;
					break;
				}
			}
		}
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (damaged[i] == -1)
			cnt++;
	}
	cout << cnt;
}