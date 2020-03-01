#include <iostream>
#include <stack>
using namespace std;
int main() {
	int arr[11],size=0,input,c,s;
	cin >> input;
	for(int i=0;i<input;i++)
	{
		cin >> c;
		if(!c)
		{
			if(size<10)
			{
				cin >> s;
				arr[size]=s;
				size++;
			}
			else
				cout << "overflow"<<endl;
		}
		else if(c==1)
		{
			if(size>0)
			{
				arr[size-1]=0;
				size--;
			}
			else
				cout << "underflow"<<endl;
		}
		else break;
	}
	for(int i=0;i<size;i++)
		cout << arr[i] << " ";
	return 0;
}
