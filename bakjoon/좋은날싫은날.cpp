#include <iostream>
#include <cmath>
using namespace std;

float per[4];
float sum, good, bad;

void feeling(int feel,float sum,int n)
{
	n--;
	sum = roundf(sum * 100) / 100;
	if (n)
	{
		if (feel)
		{
			
			feeling(feel, sum * per[0], n);
			feeling(!feel, sum * per[1], n);
		}
		else
		{
			feeling(!feel, sum * per[2], n);
			feeling(feel, sum * per[3], n);
		}
	}
	else
	{
		if (feel)
			good += sum;
		else
			bad += sum;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, feel;

	cin >> n >> feel;
	for (int i = 0; i < 1; i++)
	{
		cin >> per[i];
		per[i] = round(per[i] * 100)/100;
	}

	feeling(feel, 1, n+1);
	cout << good << endl << bad;
}
