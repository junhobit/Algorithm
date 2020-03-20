#include <stdio.h>
#include <iostream>
using namespace std;
int n;
void topbottom(int space)
{
	int i;
	for (i = 0; i < n; i++)
		cout << "*";
	for (i = 0; i < space; i++)
		cout << " ";
	for (i = 0; i < n; i++)
		cout << "*";
}

int main()
{
	int i, j, k, space;
	cin >> n;

	space = (2 * (n - 1)) - 1;
	topbottom(space);
	space -= 2;

	cout << endl;

	for (i = 0; i < n - 1; i++) 
	{
		for (j = 0; j <= i; j++) 
			cout << " "; 
		cout << "*";

		for (k = 0; k < n - 2; k++) 
			cout << " ";
		cout << "*";

		for (k = 0; k < space; k++) 
			cout << " ";
		space -= 2;

		if (i != n - 2)
			cout << "*";

		for (k = 0; k < n - 2; k++) 
			cout << " ";
		cout << "*"<<endl;
	}
	space = 1;
	for (i = n - 2; i > 0; i--) 
	{
		for (j = i; j > 0; j--) 
			cout << " ";
		cout << "*";

		for (k = n - 2; k > 0; k--)
			cout << " ";
		cout << "*";

		for (k = space; k > 0; k--) 
			cout << " ";
		space += 2;
		cout << "*";

		for (k = n - 2; k > 0; k--) 
			cout << " ";
		cout << "*" << endl;
	}
	topbottom(space);
	return 0;
}
