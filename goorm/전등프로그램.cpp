#include <iostream>
using namespace std;

int main() {
	int x, y, n, a, b;
	cin >> x >> y;
	
	if(x<2||y>50)
		return 0;
	
	int board[x][y];

	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			cin >> board[i][j];

	cin >> n;
	if(n<1||n>100)
		return 0;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if (a)
		{
			if(b>y)
				return 0;
			for (int j = 0; j < x; j++)
			{
				if (board[j][b - 1])
					board[j][b - 1] = 0;
				else
					board[j][b - 1] = 1;
			}
		}
		else if(a==0)
		{
			if(b>x)
				return 0;
			for (int j = 0; j < y; j++)
			{
				if (board[b - 1][j])
					board[b - 1][j] = 0;
				else
					board[b - 1][j] = 1;
			}
		}

	}
	for (int i = 0; i < x; i++)
	{
		for(int j=0;j<y;j++)
		{
			cout << board[i][j];
			if(j!=y-1)
			cout << " ";
		}
		if(i!=x-1)
			cout << endl;
	}
	return 0;
}
