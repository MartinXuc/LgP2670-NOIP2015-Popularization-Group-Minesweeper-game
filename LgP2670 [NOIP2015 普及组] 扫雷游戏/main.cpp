#include<iostream>
using namespace std;
int main()
{
	int n, m;
	int dx[8] = { -1,-1,-1,0,1,1,1,0 };
	int dy[8] = { -1,0,1,1,1,0,-1,-1 };
	cin >> n >> m;
	char square[101][101];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> square[i][j];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			if (square[i][j] == '?')
			{
				char count = '0';
				for (int k = 0; k < 8; k++)
				{
					if (square[i + dx[k]][j + dy[k]] == '*')
						count++;
				}
				square[i][j] = count;
			}
		}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			cout << square[i][j];
		cout << endl;
	}
	return 0;
}