#include <iostream>
#include <string>
using namespace std;
int main() {
	int size,mid;
	string input;
	getline(cin,input);
	size = input.size();
	mid = size/2;
	if(size%2!=0)
		mid++;
	for(int i=0,j=size-1;i<mid;i++,j--)
	{
		if(i==j)
			cout << input.at(i);
		else
			cout << input.at(i) << input.at(j);
	}
	return 0;
}
