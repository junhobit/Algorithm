#include <iostream>
using namespace std;
int main() 
{
	int input;
	int a,b,sum=0;
	cin >> input;
	int arr[input];
	for (int i=0;i<input;i++)
		cin >> arr[i];
	cin >> a >> b;
	for (int i=a-1;i<b;i++)
		sum+=arr[i];
	cout << sum;
	return 0;
}
