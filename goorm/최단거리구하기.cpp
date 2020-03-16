#include <iostream>
#include <queue>
using namespace std;
int main()
{
	int size, road = 0;
	cin >> size;
	int maze[size][size];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			cin >> maze[i][j];
	}
	
	int visited[size][size];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j <= size; j++)
			visited[i][j] = 0;
	}
	//������ġ�� �� ��ġ. 
	int sx = 0, sy = 0, ex = size - 1, ey = size - 1;

	//BFS �˰���  
	queue<int> q;
	int x, y, d = 1;
	//��� �Դ��� ��� 
	q.push(sx); q.push(sy); q.push(d);
	visited[sy][sx] = 1;
	for (;;)
	{
		x = q.front(); q.pop();
		y = q.front(); q.pop();
		d = q.front(); q.pop();
		//Ż�ⱸ�� �����ߴٸ� ���� 
		if (x == ex && y == ey) break;
		int mv[][2] = { 0, 1, 1, 0, 0, -1, -1, 0 };
		for (int i = 0; i < 4; i++)
		{
			int nx = x + mv[i][1];
			int ny = y + mv[i][0];
			if ( visited[ny][nx] || maze[ny][nx] == 0) continue;
			visited[ny][nx] = 1;
			q.push(nx);
			q.push(ny);
			q.push(d + 1);
		}
		if (q.empty()) return 0;
	}
	cout << d << endl;

	return 0;
}
