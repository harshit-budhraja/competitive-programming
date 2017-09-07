#include <string>
#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

#define integer long long int
#define MaxZ 101

integer movew[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };

struct pos {
	integer i, j;
};

integer m, n, z, oo;

string maze[50];
integer id[50][50], lnk[MaxZ][MaxZ];
integer dist[50][50];

void bfs(pos s) {
	memset(dist, 127, sizeof(dist));
	dist[s.i][s.j] = 0;
	queue<pos> q;
	q.push(s);
	while (!q.empty()) {
		pos p = q.front();
		q.pop();
		//cout << "D: p= " << p.i << " " << p.j << " " << dist[p.i][p.j] << endl;
		for (integer k = 0; k < 4; k++) {
			pos r = { p.i + movew[k][0], p.j + movew[k][1] };
			if (r.i >= 0 && r.i < n && r.j >= 0 && r.j < m && maze[r.i][r.j] != '#' && dist[r.i][r.j] == oo) {
				dist[r.i][r.j] = dist[p.i][p.j] + 1;
				q.push(r);
			}
		}
		if (maze[p.i][p.j] == 'A' || maze[p.i][p.j] == 'S') {
			lnk[id[p.i][p.j]][id[s.i][s.j]] = dist[p.i][p.j];
			lnk[id[s.i][s.j]][id[p.i][p.j]] = dist[p.i][p.j];
		}
	}
}

integer prim() {
	// initialize
	integer cost[MaxZ], sol = 0;
	memset(cost, 127, sizeof(cost));
	bool yet[MaxZ];
	memset(yet, true, sizeof(yet));
	integer next = 0;
	cost[next] = 0;
	for (integer k = 1; k < z; k++) {
		integer now = next;
		yet[now] = false;
		next = -1;
		for (integer i = 0; i < z; i++)
			if (yet[i]) {
				if (lnk[now][i] != oo && lnk[now][i] < cost[i])
					cost[i] = lnk[now][i];
				if (next == -1 || cost[i] < cost[next])
					next = i;
			}
		sol += cost[next];
	}
	return sol;
}

int main() {
	integer t;
	for (cin >> t; t; t--) {
		z = 0;
		string line;
		pos node[MaxZ];
		// input
		cin >> m >> n;
		getline(cin, line);
		for (integer i = 0; i < n; i++) {
			getline(cin, maze[i]);
			for (integer j = 0; j < m; j++) {
				if (maze[i][j] == 'S' || maze[i][j] == 'A') {
					id[i][j] = z;
					node[z].i = i;
					node[z].j = j;
					z++;
				}
			}
		}
		// BFS
		memset(lnk, 127, sizeof(lnk));
		oo = lnk[0][0];
		for (integer i = 0; i < z; i++)
			bfs(node[i]);
		// MST
		cout << prim() << endl;
	}
	return 0;
}