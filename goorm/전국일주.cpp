#include <iostream>
using namespace std;
int main() {
	int input,up=0,down=0,avg=0;
	cin >> input;
	int *fri = new int[input];
	for(int i=0;i<input;i++)
	{
		cin >> fri[i];
		avg += fri[i];
	}
	avg /= input;
	for(int i=0;i<input;i++)
	{
		if(fri[i]>avg)
			up += fri[i]-avg;
		else
			down += avg-fri[i];
	}
	cout<<(up+down)/2;
	return 0;
}
