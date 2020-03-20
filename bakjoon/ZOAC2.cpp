#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string input;
	int arrow=0;
	int plus=0,minus=0,ans=0;
	int p_arow,m_arow;
	cin >> input;
	for (int i=0;i<input.size();i++)
	{
		for(int j=arrow;;j++)
		{
			if(j>=26)
				j-=26;
			if(input.at(i)==j+65)
				break;
			plus++;
		}
		for(int j=arrow;;j--)
		{
			if(j<0)
				j+=26;
			if(input.at(i)==j+65)
				break;
			minus++;			
		}
		arrow=input.at(i)-65;
		ans += min(plus,minus);
		plus=0;minus=0;
	}
	cout << ans;
    return 0;
}
