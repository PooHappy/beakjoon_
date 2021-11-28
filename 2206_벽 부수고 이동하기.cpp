//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n, m;
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//int graph[1001][1001];
//bool chk[1001][1001][2];
//int result = 987654321;
//int bfs() {
//	queue<tuple<int, int, int, bool>> q;
//	q.push(make_tuple(0, 0, 1, false));
//
//	while (!q.empty()) {
//		int x = get<0>(q.front());
//		int y = get<1>(q.front());
//		int cnt = get<2>(q.front());
//		bool use = get<3>(q.front());
//		chk[x][y][use] = true;
//		q.pop();
//
//		// (N, M)에 도착하면
//		if (x  == n-1 && y  == m-1) {
//			result = min(result, cnt);
//		}
//
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			//경계 넘어가면 안해도됨
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
//				continue;
//
//			//부수고 오든 안부수고 오든 현재 상태로 도달한 적이 없고 벽으로 막혀있지 않으면 push
//			if (chk[nx][ny][use] == false && graph[nx][ny] == 0) {
//				q.push(make_tuple(nx, ny, cnt+1, use));
//				chk[nx][ny][use] = true;
//			}
//
//			//벽으로 막혀있고 1회권 사용 하지 않았으며 현재 상태로 도달한 적이 없으면
//			if (graph[nx][ny] == 1 && use == false && chk[nx][ny][use] == false) {
//				q.push(make_tuple(nx, ny, cnt + 1, !use));
//				chk[nx][ny][!use] = true;
//			}
//		}
//	}
//	return result;
//}
//
//int main(void) {
//	cin >> n >> m;
//	cin.ignore();
//
//	for (int i = 0; i < n; i++) {
//		string str;
//		getline(cin, str);
//		for (int j = 0; j < str.length(); j++) {
//			graph[i][j] = str[j]-'0';
//		}
//	}
//	int r = bfs();
//	if (result == 987654321)
//		cout << -1;
//	else
//		cout << result;
//}